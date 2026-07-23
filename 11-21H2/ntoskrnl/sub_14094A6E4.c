/*
 * XREFs of sub_14094A6E4 @ 0x14094A6E4
 * Callers:
 *     sub_1405616A0 @ 0x1405616A0 (sub_1405616A0.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char __fastcall sub_14094A6E4(__int64 a1)
{
  ExReleasePushLockEx(a1 + 64, 0LL);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
