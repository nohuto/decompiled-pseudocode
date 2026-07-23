/*
 * XREFs of sub_1406D5E5C @ 0x1406D5E5C
 * Callers:
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char sub_1406D5E5C()
{
  ExReleasePushLockEx((ULONG_PTR)&qword_140C493F8, 0LL);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
