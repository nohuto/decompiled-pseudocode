/*
 * XREFs of sub_140369B48 @ 0x140369B48
 * Callers:
 *     sub_1405CFBF0 @ 0x1405CFBF0 (sub_1405CFBF0.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407ED88C @ 0x1407ED88C (sub_1407ED88C.c)
 *     sub_1407EDCAC @ 0x1407EDCAC (sub_1407EDCAC.c)
 *     sub_1407EF430 @ 0x1407EF430 (sub_1407EF430.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 *     PoFxRegisterDevice @ 0x140823470 (PoFxRegisterDevice.c)
 *     sub_140850E08 @ 0x140850E08 (sub_140850E08.c)
 *     sub_14098F180 @ 0x14098F180 (sub_14098F180.c)
 *     sub_1409927E0 @ 0x1409927E0 (sub_1409927E0.c)
 *     sub_140992810 @ 0x140992810 (sub_140992810.c)
 *     sub_1409974E8 @ 0x1409974E8 (sub_1409974E8.c)
 *     sub_14099CBC8 @ 0x14099CBC8 (sub_14099CBC8.c)
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

__int64 sub_140369B48(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_140369C50((void *)&File, (__int64)va, 1);
}
