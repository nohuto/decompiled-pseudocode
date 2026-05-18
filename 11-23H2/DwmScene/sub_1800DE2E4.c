/*
 * XREFs of sub_1800DE2E4 @ 0x1800DE2E4
 * Callers:
 *     sub_1800DE4B0 @ 0x1800DE4B0 (sub_1800DE4B0.c)
 * Callees:
 *     sub_1800DE1E8 @ 0x1800DE1E8 (sub_1800DE1E8.c)
 *     sub_1800DE218 @ 0x1800DE218 (sub_1800DE218.c)
 */

__int64 __fastcall sub_1800DE2E4(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_1800DE1E8((void **)(a1 + 240));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 160));
  sub_1800DE218((void **)(a1 + 144));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_1800DBD04(a1);
}
