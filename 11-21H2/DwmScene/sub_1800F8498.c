/*
 * XREFs of sub_1800F8498 @ 0x1800F8498
 * Callers:
 *     sub_18010D0D8 @ 0x18010D0D8 (sub_18010D0D8.c)
 *     sub_18010D120 @ 0x18010D120 (sub_18010D120.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800F8498(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0xB0uLL);
  return result;
}
