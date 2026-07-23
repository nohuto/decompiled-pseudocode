/*
 * XREFs of sub_1402323E8 @ 0x1402323E8
 * Callers:
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_140316E90 @ 0x140316E90 (sub_140316E90.c)
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 * Callees:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 */

__int64 __fastcall sub_1402323E8(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    return 1LL;
  }
  if ( (sub_140326870(BugCheckParameter2) & 3) == 0 )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    sub_1402BF9C0(BugCheckParameter2);
    return 1LL;
  }
  sub_14033FAA4(BugCheckParameter2);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
  return 0LL;
}
