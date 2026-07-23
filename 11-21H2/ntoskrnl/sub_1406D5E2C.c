/*
 * XREFs of sub_1406D5E2C @ 0x1406D5E2C
 * Callers:
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_1406D5E2C()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C493F8, 0LL);
}
