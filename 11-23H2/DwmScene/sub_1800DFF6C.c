/*
 * XREFs of sub_1800DFF6C @ 0x1800DFF6C
 * Callers:
 *     sub_1800E0030 @ 0x1800E0030 (sub_1800E0030.c)
 * Callees:
 *     sub_1800DE1E8 @ 0x1800DE1E8 (sub_1800DE1E8.c)
 */

void **__fastcall sub_1800DFF6C(__int64 a1)
{
  void **result; // rax

  sub_1800DE1E8((void **)(a1 + 96));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 8));
  result = &Spectre::Utils::ICancellationToken::`vftable';
  *(_QWORD *)a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
