/*
 * XREFs of sub_14051CBE4 @ 0x14051CBE4
 * Callers:
 *     sub_14051C710 @ 0x14051C710 (sub_14051C710.c)
 * Callees:
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 */

__int64 __fastcall sub_14051CBE4(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = a1[5];
  result = 0LL;
  if ( ((v1 & 0x4000000000000000LL) == 0 || byte_140D0159C)
    && ((v1 & 0xEFC0) == 0xC0 || (v1 & 0xEF00) == 0x100 && (v1 & 3) == 2 && (unsigned __int8)v1 >> 4 == 7)
    && (v1 & 0xC00000000000000LL) == 0xC00000000000000LL )
  {
    v4 = a1[7];
    if ( (a1[7] & 0x1C0LL) == 0x80 )
      return sub_14051C2D8(qword_140C09798 & a1[6] & ~((1LL << (v4 & 0x3F)) - 1), 0, 0LL, 0, v1, 0, 1, 0);
  }
  return result;
}
