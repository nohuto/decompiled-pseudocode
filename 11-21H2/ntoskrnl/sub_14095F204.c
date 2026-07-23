/*
 * XREFs of sub_14095F204 @ 0x14095F204
 * Callers:
 *     sub_140959490 @ 0x140959490 (sub_140959490.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14095F29C @ 0x14095F29C (sub_14095F29C.c)
 */

__int64 __fastcall sub_14095F204(int a1, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r8d
  unsigned int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(&Semaphore, DelayExecution, 0, 0, 0LL);
  v10 = sub_14095F29C(a1, a2, v9, a4, a5);
  KeReleaseSemaphore(&Semaphore, 0, 1, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v10;
}
