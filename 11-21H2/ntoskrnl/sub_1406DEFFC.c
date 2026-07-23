/*
 * XREFs of sub_1406DEFFC @ 0x1406DEFFC
 * Callers:
 *     sub_140208994 @ 0x140208994 (sub_140208994.c)
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_140256264 @ 0x140256264 (sub_140256264.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_1406DEFFC()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49860, 0LL);
}
