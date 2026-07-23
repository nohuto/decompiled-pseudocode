/*
 * XREFs of sub_14067C50C @ 0x14067C50C
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_14067C50C(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
