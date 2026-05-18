/*
 * XREFs of sub_180012548 @ 0x180012548
 * Callers:
 *     sub_180012728 @ 0x180012728 (sub_180012728.c)
 *     sub_18004399C @ 0x18004399C (sub_18004399C.c)
 *     sub_1800552D8 @ 0x1800552D8 (sub_1800552D8.c)
 * Callees:
 *     sub_180012030 @ 0x180012030 (sub_180012030.c)
 */

signed __int64 __fastcall sub_180012548(__int64 a1)
{
  return _InterlockedIncrement64((volatile signed __int64 *)sub_180012030(a1));
}
