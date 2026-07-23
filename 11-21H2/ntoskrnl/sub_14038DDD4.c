/*
 * XREFs of sub_14038DDD4 @ 0x14038DDD4
 * Callers:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_140A4F990 @ 0x140A4F990 (sub_140A4F990.c)
 *     sub_140A4F9D8 @ 0x140A4F9D8 (sub_140A4F9D8.c)
 *     sub_140A4FAC4 @ 0x140A4FAC4 (sub_140A4FAC4.c)
 */

__int64 __fastcall sub_14038DDD4(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 28) )
  {
    sub_1405C6658(BugCheckParameter3, 456LL, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return sub_140A4F9D8(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return sub_140A4FAC4(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    sub_1405C6658(BugCheckParameter3, 456LL, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return sub_140A4F990(BugCheckParameter3, a3, a4);
}
