/*
 * XREFs of sub_14083F51C @ 0x14083F51C
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 *     sub_140840FF8 @ 0x140840FF8 (sub_140840FF8.c)
 */

char sub_14083F51C()
{
  struct _KTHREAD *CurrentThread; // rax

  sub_140840FF8();
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16E60, 0LL);
  sub_14083F570();
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16E60, 0LL);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
