/*
 * XREFs of sub_1409DA758 @ 0x1409DA758
 * Callers:
 *     sub_14062C578 @ 0x14062C578 (sub_14062C578.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 *     sub_140840FF8 @ 0x140840FF8 (sub_140840FF8.c)
 *     sub_1409DA868 @ 0x1409DA868 (sub_1409DA868.c)
 */

__int64 sub_1409DA758()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  if ( !byte_140C16E58 )
    sub_140840FF8();
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16E60, 0LL);
  if ( byte_140C16E48 )
    sub_1409DA868();
  v1 = sub_14083F570();
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16E60, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v1;
}
