/*
 * XREFs of TtmpInitiateModernStandbyTransition @ 0x1409A5480
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1409A50A8 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1409A529C (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PoTtmInitiatePowerStateTransition @ 0x140997CA8 (PoTtmInitiatePowerStateTransition.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1409A8978 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1409A8A6C (TtmiLogInitiateModernStandbyTransitionStop.c)
 */

__int64 __fastcall TtmpInitiateModernStandbyTransition(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx

  v4 = a1;
  LOBYTE(a1) = a2;
  TtmiLogInitiateModernStandbyTransitionStart(a1, a3);
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  v6 = PoTtmInitiatePowerStateTransition(a2, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *(_QWORD *)(v4 + 232) = KeGetCurrentThread();
  TtmiLogInitiateModernStandbyTransitionStop(v8);
  return v8;
}
