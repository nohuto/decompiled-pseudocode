/*
 * XREFs of sub_180041688 @ 0x180041688
 * Callers:
 *     sub_1800AC370 @ 0x1800AC370 (sub_1800AC370.c)
 * Callees:
 *     sub_18001C880 @ 0x18001C880 (sub_18001C880.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

__int64 __fastcall sub_180041688(__m128 *a1, __int64 a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __m128 v7; // xmm0
  __int64 result; // rax
  _OWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  __m128 v10; // [rsp+60h] [rbp-18h] BYREF

  sub_180043668(a1);
  sub_1800414A0(a1, v9);
  v4 = v9[1];
  v5 = v9[2];
  v6 = v9[3];
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  v7 = sub_18001C880(&v10, *(double *)&v4, *(double *)&v5, *(double *)&v6);
  result = a2;
  *(__m128 *)a2 = v7;
  *(_OWORD *)(a2 + 16) = v4;
  *(_OWORD *)(a2 + 32) = v5;
  *(_OWORD *)(a2 + 48) = v6;
  return result;
}
