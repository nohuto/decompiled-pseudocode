/*
 * XREFs of PfSnAsyncContextInitialize @ 0x1407DB4A8
 * Callers:
 *     PfSnPrefetchScenario @ 0x1407DB400 (PfSnPrefetchScenario.c)
 * Callees:
 *     ExInitializePushLock @ 0x140223590 (ExInitializePushLock.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeInitializeTimerEx @ 0x1402BE8F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     PsGetPagePriorityThread @ 0x1402E17B0 (PsGetPagePriorityThread.c)
 *     PfSnReferenceProcessTrace @ 0x1402E2844 (PfSnReferenceProcessTrace.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PfSnAsyncContextInitialize(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _KPROCESS *Process; // rcx
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rcx

  memset(a1, 0, 0xF8uLL);
  a1[26] = a2;
  a1[4] = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[27] = Process;
  ObfReferenceObject(Process);
  v9 = PfSnReferenceProcessTrace(a1[27]);
  v10 = (struct _EX_RUNDOWN_REF *)a1[4];
  a1[28] = v9;
  ExInitializePushLock(v10);
  *((_DWORD *)a1 + 59) = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
  *a1 = 0LL;
  a1[2] = PfSnAsyncPrefetchWorker;
  a1[3] = a1;
  if ( a4 )
    *((_DWORD *)a1 + 60) |= 1u;
  ExInitializePushLock((PEX_RUNDOWN_REF)a1 + 5);
  a1[22] = 0LL;
  a1[24] = PfSnPowerBoostWorker;
  a1[25] = a1 + 5;
  KeInitializeTimerEx((PKTIMER)(a1 + 6), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a1 + 14), (PKDEFERRED_ROUTINE)PfSnPowerBoostDpc, a1 + 5);
}
