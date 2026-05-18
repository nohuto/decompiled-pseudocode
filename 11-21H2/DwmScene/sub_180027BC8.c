/*
 * XREFs of sub_180027BC8 @ 0x180027BC8
 * Callers:
 *     sub_180100249 @ 0x180100249 (sub_180100249.c)
 * Callees:
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 */

__int64 __fastcall sub_180027BC8(char **a1)
{
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 2));
  sub_18001E060((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_180010884(*a1, 0x68uLL);
}
