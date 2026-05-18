/*
 * XREFs of sub_1800A5488 @ 0x1800A5488
 * Callers:
 *     sub_1800A5528 @ 0x1800A5528 (sub_1800A5528.c)
 * Callees:
 *     sub_1800A54F0 @ 0x1800A54F0 (sub_1800A54F0.c)
 *     sub_1800A55F0 @ 0x1800A55F0 (sub_1800A55F0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A5488(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx

  *(_DWORD *)a1 = *a2;
  sub_1800A54F0(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_1800A55F0(a1 + 24, v3, *(_QWORD *)(a1 + 8));
  return a1;
}
