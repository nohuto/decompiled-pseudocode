/*
 * XREFs of ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C007E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::_PowerPolDevicePowerUpComplete(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int8 MinorFunction,
        _POWER_STATE PowerState,
        FxPkgPnp *Context)
{
  const void *_a1; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // r8

  if ( Context->m_PowerPolicyMachine.m_Owner->m_RequestedPowerUpIrp )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Context->m_DeviceBase);
    WPP_IFR_SF_qq(
      Context->m_Globals,
      2u,
      0xCu,
      0x26u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v6 + 144));
    FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolPowerUpNotSeen, v7);
  }
}
