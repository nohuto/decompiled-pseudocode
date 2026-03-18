/*
 * XREFs of ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C0015F48
 * Callers:
 *     ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x1C0014720 (-_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z.c)
 *     ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0015F30 (-_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0030C60 (-_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0016054 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxEventQueue::EventQueueWorker(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  KIRQL v4; // al
  KIRQL v5; // dl
  unsigned __int8 m_QueueFlags; // r8
  unsigned __int8 v7; // cl
  FxCREvent *m_WorkItemFinished; // rax
  FxPostProcessInfo info; // [rsp+20h] [rbp-28h] BYREF

  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  m_PkgPnp = this->m_PkgPnp;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_PkgPnp = this->m_PkgPnp;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags &= ~1u;
  ++this->m_WorkItemRunningCount;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v4);
  this->m_EventWorker(this->m_PkgPnp, &info, this->m_EventWorkerContext);
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  m_QueueFlags = this->m_QueueFlags;
  v7 = this->m_WorkItemRunningCount - 1;
  this->m_WorkItemRunningCount = v7;
  if ( (m_QueueFlags & 1) == 0 && !v7 && this->m_QueueHead == this->m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      m_QueueFlags &= ~4u;
      info.m_DeleteObject = 1;
      this->m_QueueFlags = m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      m_WorkItemFinished = this->m_WorkItemFinished;
      this->m_WorkItemFinished = 0LL;
      info.m_Event = m_WorkItemFinished;
    }
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v5);
  FxPostProcessInfo::Evaluate(&info, m_PkgPnp);
}
