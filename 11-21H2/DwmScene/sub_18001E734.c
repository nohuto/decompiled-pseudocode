/*
 * XREFs of sub_18001E734 @ 0x18001E734
 * Callers:
 *     sub_1800FFD9E @ 0x1800FFD9E (sub_1800FFD9E.c)
 *     unknown_libname_23 @ 0x180100740 (unknown_libname_23.c)
 *     sub_180100818 @ 0x180100818 (sub_180100818.c)
 *     sub_180103A53 @ 0x180103A53 (sub_180103A53.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18001E734(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x48uLL);
  return result;
}
