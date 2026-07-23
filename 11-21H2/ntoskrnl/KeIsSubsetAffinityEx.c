/*
 * XREFs of KeIsSubsetAffinityEx @ 0x14020EF50
 * Callers:
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_1402255A0 @ 0x1402255A0 (sub_1402255A0.c)
 *     sub_14022560C @ 0x14022560C (sub_14022560C.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1405C7A38 @ 0x1405C7A38 (sub_1405C7A38.c)
 *     sub_1405C9170 @ 0x1405C9170 (sub_1405C9170.c)
 *     sub_1406EB2C4 @ 0x1406EB2C4 (sub_1406EB2C4.c)
 *     sub_1409AD870 @ 0x1409AD870 (sub_1409AD870.c)
 *     sub_1409AE810 @ 0x1409AE810 (sub_1409AE810.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int64 a1, __int64 a2)
{
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  sub_1402FF140(a1, a2, v5, 32LL);
  return KeIsEqualAffinityEx(a1, v5);
}
