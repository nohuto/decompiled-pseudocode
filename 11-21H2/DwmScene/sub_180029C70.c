/*
 * XREFs of sub_180029C70 @ 0x180029C70
 * Callers:
 *     sub_180100418 @ 0x180100418 (sub_180100418.c)
 *     sub_180103495 @ 0x180103495 (sub_180103495.c)
 *     unknown_libname_53 @ 0x180103861 (unknown_libname_53.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180029C70(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x38uLL);
  return result;
}
