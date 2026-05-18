/*
 * XREFs of sub_180026F0C @ 0x180026F0C
 * Callers:
 *     sub_180027068 @ 0x180027068 (sub_180027068.c)
 * Callees:
 *     sub_1800292D0 @ 0x1800292D0 (sub_1800292D0.c)
 */

__int64 __fastcall sub_180026F0C(__int64 a1)
{
  __int64 v1; // rcx

  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_1800292D0();
  return v1;
}
