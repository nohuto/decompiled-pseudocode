/*
 * XREFs of ??0NdisWatchdogState@@QEAA@XZ @ 0x1C01126E4
 * Callers:
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C0112690 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

NdisWatchdogState *__fastcall NdisWatchdogState::NdisWatchdogState(char *DeferredContext)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  *((_DWORD *)DeferredContext + 40) = 0;
  *((_DWORD *)DeferredContext + 41) = 0;
  *((_DWORD *)DeferredContext + 48) = 0;
  memset(DeferredContext + 200, 0, 0x40uLL);
  DeferredContext[264] = 0;
  KeInitializeDpc((PRKDPC)DeferredContext, (PKDEFERRED_ROUTINE)ndisWatchdogTimeoutDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)DeferredContext + 1);
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_QWORD *)DeferredContext + 18) = ndisWatchdogTimeoutWorkerRoutine;
  *((_QWORD *)DeferredContext + 19) = DeferredContext;
  KeInitializeEvent((PRKEVENT)DeferredContext + 7, NotificationEvent, 1u);
  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v2 = (_QWORD *)qword_1C00F5CE8;
  v3 = DeferredContext + 272;
  if ( *(struct _LIST_ENTRY **)qword_1C00F5CE8 != &g_ndisWatchdogList )
    __fastfail(3u);
  *((_QWORD *)DeferredContext + 35) = qword_1C00F5CE8;
  *v3 = &g_ndisWatchdogList;
  *v2 = v3;
  qword_1C00F5CE8 = (__int64)(DeferredContext + 272);
  KLockHolder::~KLockHolder(&v5);
  return (NdisWatchdogState *)DeferredContext;
}
