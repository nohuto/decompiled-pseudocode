/*
 * XREFs of sub_1800254A8 @ 0x1800254A8
 * Callers:
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 * Callees:
 *     sub_180027134 @ 0x180027134 (sub_180027134.c)
 */

__int64 __fastcall sub_1800254A8(__int64 a1)
{
  __int64 v1; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_180027134();
  return v1;
}
