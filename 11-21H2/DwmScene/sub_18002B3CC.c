/*
 * XREFs of sub_18002B3CC @ 0x18002B3CC
 * Callers:
 *     sub_180100460 @ 0x180100460 (sub_180100460.c)
 *     sub_18010228C @ 0x18010228C (sub_18010228C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18002B3CC(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x28uLL);
  return result;
}
