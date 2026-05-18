/*
 * XREFs of sub_180056AE8 @ 0x180056AE8
 * Callers:
 *     sub_1800CC518 @ 0x1800CC518 (sub_1800CC518.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 */

__int64 __fastcall sub_180056AE8(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    sub_180011B80();
  v4 = sub_18001E9F4(a2);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
