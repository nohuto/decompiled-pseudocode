/*
 * XREFs of sub_140970960 @ 0x140970960
 * Callers:
 *     sub_14059F6F4 @ 0x14059F6F4 (sub_14059F6F4.c)
 *     sub_14059FC8C @ 0x14059FC8C (sub_14059FC8C.c)
 *     sub_140970668 @ 0x140970668 (sub_140970668.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_140970960()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F468, 0LL);
}
