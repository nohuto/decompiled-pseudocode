/*
 * XREFs of sub_180070144 @ 0x180070144
 * Callers:
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_1800E4D45 @ 0x1800E4D45 (sub_1800E4D45.c)
 *     sub_1800E4D5E @ 0x1800E4D5E (sub_1800E4D5E.c)
 *     sub_1800E4D77 @ 0x1800E4D77 (sub_1800E4D77.c)
 * Callees:
 *     sub_18003191C @ 0x18003191C (sub_18003191C.c)
 */

__int64 __fastcall sub_180070144(__int64 a1)
{
  sub_18003191C((void **)(a1 + 200));
  sub_18003191C((void **)(a1 + 184));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 104));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 24));
  return sub_180070620(a1);
}
