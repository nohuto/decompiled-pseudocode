/*
 * XREFs of sub_180032800 @ 0x180032800
 * Callers:
 *     sub_180100E8D @ 0x180100E8D (sub_180100E8D.c)
 *     sub_18010D088 @ 0x18010D088 (sub_18010D088.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180032800(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x30uLL);
  return result;
}
