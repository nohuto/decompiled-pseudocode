/*
 * XREFs of sub_1406DEFDC @ 0x1406DEFDC
 * Callers:
 *     sub_140208994 @ 0x140208994 (sub_140208994.c)
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_140256264 @ 0x140256264 (sub_140256264.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

__int64 sub_1406DEFDC()
{
  return ExReleasePushLockEx((ULONG_PTR)&qword_140C49860, 0LL);
}
