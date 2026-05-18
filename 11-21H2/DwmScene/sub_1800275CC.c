/*
 * XREFs of sub_1800275CC @ 0x1800275CC
 * Callers:
 *     sub_180100360 @ 0x180100360 (sub_180100360.c)
 *     sub_180103298 @ 0x180103298 (sub_180103298.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800275CC(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x40uLL);
  return result;
}
