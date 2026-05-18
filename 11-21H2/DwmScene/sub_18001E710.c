/*
 * XREFs of sub_18001E710 @ 0x18001E710
 * Callers:
 *     sub_1800FFD20 @ 0x1800FFD20 (sub_1800FFD20.c)
 *     sub_180103000 @ 0x180103000 (sub_180103000.c)
 *     sub_18010D241 @ 0x18010D241 (sub_18010D241.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18001E710(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x68uLL);
  return result;
}
