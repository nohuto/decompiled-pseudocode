/*
 * XREFs of sub_1405F29CC @ 0x1405F29CC
 * Callers:
 *     sub_1409C5570 @ 0x1409C5570 (sub_1409C5570.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_1405F29CC()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1BBE8, 0LL);
}
