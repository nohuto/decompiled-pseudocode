/*
 * XREFs of ?SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z @ 0x1C0081528
 * Callers:
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C0071BD8 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FxEventQueue::SetFinished(FxEventQueue *this, FxCREvent *Event)
{
  KIRQL v4; // al
  char v5; // di

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags |= 2u;
  v5 = 1;
  if ( (this->m_QueueFlags & 1) != 0 || this->m_WorkItemRunningCount || this->m_QueueHead != this->m_QueueTail )
  {
    v5 = 0;
    this->m_WorkItemFinished = Event;
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v4);
  if ( v5 )
    KeSetEvent(&Event->m_Event.m_Event, 0, 0);
  return v5;
}
