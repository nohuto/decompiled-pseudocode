/*
 * XREFs of sub_180021ECC @ 0x180021ECC
 * Callers:
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 *     sub_1800405C8 @ 0x1800405C8 (sub_1800405C8.c)
 * Callees:
 *     sub_180012030 @ 0x180012030 (sub_180012030.c)
 */

signed __int64 __fastcall sub_180021ECC(__int64 a1)
{
  return _InterlockedExchangeAdd64((volatile signed __int64 *)sub_180012030(a1), 1uLL);
}
