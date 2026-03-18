/*
 * XREFs of DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc___ @ 0x1C0024E64
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D5BF8 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_aacb25400ded284731246042636418dc_(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int128 v4; // xmm1

  v2 = *a2;
  *(_BYTE *)(a1 + 40) = 1;
  result = a1;
  v4 = a2[1];
  *(_OWORD *)a1 = v2;
  *(_QWORD *)&v2 = *((_QWORD *)a2 + 4);
  *(_OWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 32) = v2;
  return result;
}
