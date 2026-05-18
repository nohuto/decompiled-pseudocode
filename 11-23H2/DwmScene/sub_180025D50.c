/*
 * XREFs of sub_180025D50 @ 0x180025D50
 * Callers:
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_1800E4D13 @ 0x1800E4D13 (sub_1800E4D13.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025D50(__int64 a1)
{
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 16));
  return sub_180025A48((void **)a1);
}
