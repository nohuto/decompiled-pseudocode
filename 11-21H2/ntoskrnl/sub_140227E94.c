/*
 * XREFs of sub_140227E94 @ 0x140227E94
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 */

__int64 __fastcall sub_140227E94(__int64 a1)
{
  __int64 result; // rax

  sub_140239060(a1);
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  sub_140336AD8(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
