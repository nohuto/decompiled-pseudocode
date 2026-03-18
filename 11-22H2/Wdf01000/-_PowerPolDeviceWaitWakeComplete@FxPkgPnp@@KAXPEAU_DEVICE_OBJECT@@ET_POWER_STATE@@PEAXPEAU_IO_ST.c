/*
 * XREFs of ?_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C007E150
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::_PowerPolDeviceWaitWakeComplete(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int8 MinorFunction,
        _POWER_STATE PowerState,
        FxPkgPnp *Context,
        _IO_STATUS_BLOCK *IoStatus)
{
  FxPowerPolicyEvent v5; // edx

  Context->m_PowerPolicyMachine.m_Owner->m_WaitWakeStatus = IoStatus->Status;
  v5 = PwrPolWakeSuccess;
  if ( IoStatus->Status < 0 )
    v5 = PwrPolWakeFailed;
  FxPkgPnp::PowerPolicyProcessEvent(Context, v5, PowerState.SystemState);
}
