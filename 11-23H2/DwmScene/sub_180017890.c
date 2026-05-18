/*
 * XREFs of sub_180017890 @ 0x180017890
 * Callers:
 *     sub_18001E3FC @ 0x18001E3FC (sub_18001E3FC.c)
 *     sub_1800254FC @ 0x1800254FC (sub_1800254FC.c)
 *     sub_1800DFE60 @ 0x1800DFE60 (sub_1800DFE60.c)
 *     sub_1800E1AD4 @ 0x1800E1AD4 (sub_1800E1AD4.c)
 *     sub_1800EA48B @ 0x1800EA48B (sub_1800EA48B.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180017890(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &stdext::exception::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180017648((_QWORD *)(a1 + 16), a2 + 16);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  return a1;
}
