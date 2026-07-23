/*
 * XREFs of sub_140368C88 @ 0x140368C88
 * Callers:
 *     sub_14057F1F0 @ 0x14057F1F0 (sub_14057F1F0.c)
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 *     sub_14075EC70 @ 0x14075EC70 (sub_14075EC70.c)
 *     sub_1407EC8C4 @ 0x1407EC8C4 (sub_1407EC8C4.c)
 *     sub_1407ECB78 @ 0x1407ECB78 (sub_1407ECB78.c)
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     sub_1408277FC @ 0x1408277FC (sub_1408277FC.c)
 *     KseUnregisterShim @ 0x140963EA0 (KseUnregisterShim.c)
 *     sub_140964230 @ 0x140964230 (sub_140964230.c)
 *     sub_1409646B4 @ 0x1409646B4 (sub_1409646B4.c)
 *     sub_140964CB8 @ 0x140964CB8 (sub_140964CB8.c)
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 *     sub_140B003F8 @ 0x140B003F8 (sub_140B003F8.c)
 *     sub_140B01140 @ 0x140B01140 (sub_140B01140.c)
 *     sub_140B01388 @ 0x140B01388 (sub_140B01388.c)
 *     sub_140B01670 @ 0x140B01670 (sub_140B01670.c)
 * Callees:
 *     sub_140368CB8 @ 0x140368CB8 (sub_140368CB8.c)
 */

__int64 sub_140368C88(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_140368CB8(a1, 0LL, a2, (__int64 *)va);
}
