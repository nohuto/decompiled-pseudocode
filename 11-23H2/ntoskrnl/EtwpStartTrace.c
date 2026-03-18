/*
 * XREFs of EtwpStartTrace @ 0x1407E4DE0
 * Callers:
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409EB9EC (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(ULONGLONG a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KMUTANT *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (struct _KMUTANT *)(a1 + 4608);
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(a1 + 4608), Executive, 0, 0, 0LL);
  LODWORD(a2) = EtwpStartLogger(a1, a2);
  KeReleaseMutex(v3, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)a2;
}
