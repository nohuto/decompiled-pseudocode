/*
 * XREFs of ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0082790
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0082568 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::_ProcessEventInner(
        FxPkgPnp *PkgPnp,
        _FX_DRIVER_GLOBALS *Info,
        FxWakeInterruptMachine *WorkerContext)
{
  FxWaitLockInternal::AcquireLock(&WorkerContext->m_StateMachineLock, Info, 0LL);
  FxWakeInterruptMachine::ProcessEventInner(WorkerContext, (FxPostProcessInfo *)Info);
  WorkerContext->m_StateMachineLock.m_OwningThread = 0LL;
  KeSetEvent(&WorkerContext->m_StateMachineLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
