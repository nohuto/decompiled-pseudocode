/*
 * XREFs of sub_140AF66DC @ 0x140AF66DC
 * Callers:
 *     sub_140AF5C0C @ 0x140AF5C0C (sub_140AF5C0C.c)
 *     sub_140B51D98 @ 0x140B51D98 (sub_140B51D98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AF66DC(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r10
  __int64 result; // rax

  *a1 = a3;
  v4 = a3 + a4 - 1;
  a1[1] = a4;
  a1[2] = v4;
  v5 = v4 & 0xFFFFFFFFFFFFFE00uLL;
  a1[4] = a2;
  if ( v5 < a3 || v5 - a3 < 0x200 )
    result = -1LL;
  else
    result = v5 - 512;
  a1[3] = result;
  return result;
}
