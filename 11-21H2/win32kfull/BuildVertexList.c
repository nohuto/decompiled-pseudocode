/*
 * XREFs of BuildVertexList @ 0x1C01DF28C
 * Callers:
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C016B5D8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     D3DXVec4Transform @ 0x1C01DF398 (D3DXVec4Transform.c)
 */

__int64 __fastcall BuildVertexList(__int64 a1, int *a2)
{
  int *v2; // r9
  int v3; // r11d
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10

  v2 = (int *)(a1 + 12);
  v3 = 1065353216;
  *(float *)a1 = (float)*a2;
  v4 = (float)a2[1];
  *(_QWORD *)(a1 + 24) = 0LL;
  *(float *)(a1 + 4) = v4;
  *(float *)(a1 + 32) = (float)a2[2];
  v5 = (float)a2[1];
  *(_QWORD *)(a1 + 56) = 1065353216LL;
  *(float *)(a1 + 36) = v5;
  *(float *)(a1 + 64) = (float)*a2;
  v6 = (float)a2[3];
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 1065353216;
  *(float *)(a1 + 68) = v6;
  *(float *)(a1 + 96) = (float)a2[2];
  v7 = (float)a2[3];
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_DWORD *)(a1 + 124) = 1065353216;
  *(float *)(a1 + 100) = v7;
  *(float *)(a1 + 128) = (float)*a2;
  v8 = (float)a2[3];
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 1065353216;
  *(float *)(a1 + 132) = v8;
  *(float *)(a1 + 160) = (float)a2[2];
  v9 = (float)a2[1];
  *(_QWORD *)(a1 + 184) = 1065353216LL;
  *(float *)(a1 + 164) = v9;
  do
  {
    *(v2 - 1) = v3;
    *v2 = v3;
    result = D3DXVec4Transform(a1, a1);
    a1 = v11 + 32;
    v2 = (int *)(v12 + 32);
  }
  while ( v13 != 1 );
  return result;
}
