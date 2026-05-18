/*
 * XREFs of sub_1800F84BC @ 0x1800F84BC
 * Callers:
 *     sub_18010D21D @ 0x18010D21D (sub_18010D21D.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800F84BC(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0xC0uLL);
  return result;
}
