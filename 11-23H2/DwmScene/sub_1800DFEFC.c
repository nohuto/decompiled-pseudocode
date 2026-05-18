/*
 * XREFs of sub_1800DFEFC @ 0x1800DFEFC
 * Callers:
 *     sub_1800E0384 @ 0x1800E0384 (sub_1800E0384.c)
 * Callees:
 *     sub_1800DFE20 @ 0x1800DFE20 (sub_1800DFE20.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DFEFC(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 8), 2);
  *(_DWORD *)(a1 + 88) = 0;
  sub_1800DFE20((__int64 *)(a1 + 96));
  *(_BYTE *)(a1 + 112) = 0;
  return a1;
}
