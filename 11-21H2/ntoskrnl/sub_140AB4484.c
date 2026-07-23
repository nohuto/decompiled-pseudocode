/*
 * XREFs of sub_140AB4484 @ 0x140AB4484
 * Callers:
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_1406D404C @ 0x1406D404C (sub_1406D404C.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall sub_140AB4484(__int64 a1)
{
  return ExReleasePushLockEx(a1 + 1784, 0LL);
}
