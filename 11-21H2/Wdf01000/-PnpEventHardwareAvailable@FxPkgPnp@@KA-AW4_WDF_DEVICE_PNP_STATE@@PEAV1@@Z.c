/*
 * XREFs of ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0021720
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0015C14 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00217C0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x1C0021D04 (-CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0021D90 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailable(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  unsigned __int8 v3; // r8
  int _a1; // edi
  unsigned __int8 matched; // [rsp+40h] [rbp+8h] BYREF
  FxCxCallbackProgress progress; // [rsp+48h] [rbp+10h] BYREF

  v1 = This->__vftable;
  progress = FxCxCallbackProgressInitialized;
  matched = 0;
  if ( v1->QueryForReenumerationInterface(This) < 0 || FxPkgPnp::CreatePowerThreadIfNeeded(This) < 0 )
    return 303LL;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) >= 0 )
  {
    if ( !This->m_PowerPolicyMachine.m_Owner )
    {
LABEL_7:
      FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v3);
      return 314LL;
    }
    _a1 = FxPkgPnp::QueryForCapabilities(This);
    if ( _a1 >= 0 )
    {
      This->m_CapsQueried = 1;
      goto LABEL_7;
    }
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0xFu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    This->m_PendingPnPIrp->IoStatus.Status = _a1;
    return 298LL;
  }
  if ( !matched || progress == FxCxCallbackProgressInitialized )
    return 303LL;
  return 298LL;
}
