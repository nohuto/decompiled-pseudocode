/*
 * XREFs of sub_1800327DC @ 0x1800327DC
 * Callers:
 *     sub_18010083C @ 0x18010083C (sub_18010083C.c)
 *     sub_180105D5D @ 0x180105D5D (sub_180105D5D.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800327DC(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x60uLL);
  return result;
}
