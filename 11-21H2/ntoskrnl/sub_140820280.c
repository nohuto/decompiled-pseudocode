/*
 * XREFs of sub_140820280 @ 0x140820280
 * Callers:
 *     sub_140AF7328 @ 0x140AF7328 (sub_140AF7328.c)
 *     sub_140AF8120 @ 0x140AF8120 (sub_140AF8120.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_140820308 @ 0x140820308 (sub_140820308.c)
 */

__int64 __fastcall sub_140820280(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(&Semaphore, DelayExecution, 0, 0, 0LL);
  v5 = sub_140820308(a1, a2);
  KeReleaseSemaphore(&Semaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return v5;
}
