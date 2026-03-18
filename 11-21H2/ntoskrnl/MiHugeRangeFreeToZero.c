/*
 * XREFs of MiHugeRangeFreeToZero @ 0x1405872B0
 * Callers:
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 * Callees:
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 */

__int64 __fastcall MiHugeRangeFreeToZero(__int64 a1, __int64 a2)
{
  __int64 v3; // r8

  v3 = a2 & 0x3FFFFF;
  *(_QWORD *)(qword_140C52968 + 8 * v3) &= ~0x800000000000uLL;
  MiUnlinkHugeRange(a1, a2, v3, 0xFFFF7FFFFFFFFFFFuLL);
  return MiInsertHugeRangeInList(0LL, a2, 3LL);
}
