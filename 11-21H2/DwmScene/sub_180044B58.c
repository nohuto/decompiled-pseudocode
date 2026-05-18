/*
 * XREFs of sub_180044B58 @ 0x180044B58
 * Callers:
 *     sub_180101E64 @ 0x180101E64 (sub_180101E64.c)
 *     sub_180102189 @ 0x180102189 (sub_180102189.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180044B58(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x50uLL);
  return result;
}
