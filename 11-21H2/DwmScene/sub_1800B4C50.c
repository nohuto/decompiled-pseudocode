/*
 * XREFs of sub_1800B4C50 @ 0x1800B4C50
 * Callers:
 *     sub_180107971 @ 0x180107971 (sub_180107971.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800B4C50(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x1D0uLL);
  return result;
}
