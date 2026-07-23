/*
 * XREFs of sub_1405F327C @ 0x1405F327C
 * Callers:
 *     sub_1405F2F80 @ 0x1405F2F80 (sub_1405F2F80.c)
 * Callees:
 *     sub_140365700 @ 0x140365700 (sub_140365700.c)
 *     sub_1405F3950 @ 0x1405F3950 (sub_1405F3950.c)
 */

unsigned __int64 __fastcall sub_1405F327C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int8 v5; // dl
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx

  result = sub_140365700(a1, a2);
  v5 = *(_BYTE *)(result + 24) & 0xC;
  if ( v5 < 8u )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else
  {
    v6 = result & *(_QWORD *)v4;
    v7 = ((__int64)(result - v6) >> 5 << *(_BYTE *)(v4 + 8)) + v6;
    if ( v5 == 8 )
    {
      v8 = (unsigned __int16)qword_140C5A5C8 ^ *(unsigned __int16 *)(v7 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v7 >> 12);
      result = 0x4000LL;
      *(_WORD *)(v8 + v3 - 2) |= 0x4000u;
    }
    else
    {
      return sub_1405F3950(*(_QWORD *)(v4 + 32), v3, v6, v7);
    }
  }
  return result;
}
