/*
 * XREFs of ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1C0075ACC
 * Callers:
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C0075A7C (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 *     ?_WorkItemSetDeviceFailedAttemptRestart@FxPkgPnp@@CAXPEAX@Z @ 0x1C0076780 (-_WorkItemSetDeviceFailedAttemptRestart@FxPkgPnp@@CAXPEAX@Z.c)
 *     ?_WorkItemSetDeviceFailedRestartAlways@FxPkgPnp@@CAXPEAX@Z @ 0x1C00767A0 (-_WorkItemSetDeviceFailedRestartAlways@FxPkgPnp@@CAXPEAX@Z.c)
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0007508 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateDeviceState@FxPkgPnp@@AEAAXXZ @ 0x1C00733CC (-InvalidateDeviceState@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C0081778 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 */

void __fastcall FxPkgPnp::SetDeviceFailedAttemptRestart(FxPkgPnp *this, unsigned __int8 ReenumerateAlways)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx
  void (__fastcall *v5)(void *); // rdx

  if ( KeGetCurrentIrql() )
  {
    m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
    if ( m_SetDeviceFailedAttemptRestartWorkItem )
    {
      v5 = FxPkgPnp::_WorkItemSetDeviceFailedRestartAlways;
      if ( !ReenumerateAlways )
        v5 = FxPkgPnp::_WorkItemSetDeviceFailedAttemptRestart;
      FxSystemWorkItem::EnqueueWorker(m_SetDeviceFailedAttemptRestartWorkItem, v5, this, 0);
      return;
    }
$InvalidateDevice:
    FxPkgPnp::InvalidateDeviceState(this);
    return;
  }
  if ( !ReenumerateAlways && !FxPkgPnp::PnpCheckAndIncrementRestartCount(this)
    || this->AskParentToRemoveAndReenumerate(this) < 0 )
  {
    goto $InvalidateDevice;
  }
}
