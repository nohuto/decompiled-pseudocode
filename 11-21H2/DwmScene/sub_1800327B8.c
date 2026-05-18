/*
 * XREFs of sub_1800327B8 @ 0x1800327B8
 * Callers:
 *     sub_18010106D @ 0x18010106D (sub_18010106D.c)
 *     sub_180103C85 @ 0x180103C85 (sub_180103C85.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800327B8(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x20uLL);
  return result;
}
