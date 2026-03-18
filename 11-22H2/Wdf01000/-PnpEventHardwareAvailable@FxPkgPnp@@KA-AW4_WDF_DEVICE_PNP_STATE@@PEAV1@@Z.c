/*
 * XREFs of ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C006BCB4 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0075194 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x1C00816C8 (-CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailable(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  unsigned __int8 v3; // r8
  __int64 result; // rax
  signed int _a1; // eax
  int v6; // edi
  unsigned __int8 matched; // [rsp+40h] [rbp+8h] BYREF
  FxCxCallbackProgress progress; // [rsp+48h] [rbp+10h] BYREF

  v1 = This->__vftable;
  progress = FxCxCallbackProgressInitialized;
  matched = 0;
  if ( v1->QueryForReenumerationInterface(This) < 0 || FxPkgPnp::CreatePowerThreadIfNeeded(This) < 0 )
    return 303LL;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) < 0 )
  {
    if ( matched )
      return progress == FxCxCallbackProgressInitialized ? 303 : 298;
    return 303LL;
  }
  if ( This->m_PowerPolicyMachine.m_Owner )
  {
    _a1 = FxPkgPnp::QueryForCapabilities(This);
    v6 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0xFu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
      result = 298LL;
      This->m_PendingPnPIrp->IoStatus.Status = v6;
      return result;
    }
    This->m_CapsQueried = 1;
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v3);
  return 314LL;
}
