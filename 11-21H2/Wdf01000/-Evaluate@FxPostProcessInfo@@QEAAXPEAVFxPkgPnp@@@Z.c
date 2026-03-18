/*
 * XREFs of ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0016054
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0012F54 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00158AC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0015C14 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C0015F48 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C001E240 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008E490 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C00888B0 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPostProcessInfo::Evaluate(FxPostProcessInfo *this, FxPkgPnp *PkgPnp)
{
  _IRP *m_FireAndForgetIrp; // rax
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)PkgPnp->m_DeviceRemoveProcessed;
LABEL_9:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    return;
  }
  m_FireAndForgetIrp = this->m_FireAndForgetIrp;
  if ( m_FireAndForgetIrp )
  {
    this->m_FireAndForgetIrp = 0LL;
    irp.m_Irp = m_FireAndForgetIrp;
    PkgPnp->FireAndForgetIrp(PkgPnp, &irp);
  }
  if ( this->m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(PkgPnp);
  m_DeviceRemoveProcessed = this->m_Event;
  if ( this->m_Event )
    goto LABEL_9;
}
