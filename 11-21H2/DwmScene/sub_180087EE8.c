/*
 * XREFs of sub_180087EE8 @ 0x180087EE8
 * Callers:
 *     sub_180105D03 @ 0x180105D03 (sub_180105D03.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180087EE8(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x38uLL);
  return result;
}
