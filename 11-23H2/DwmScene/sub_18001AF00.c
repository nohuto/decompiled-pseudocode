/*
 * XREFs of sub_18001AF00 @ 0x18001AF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_18001AF00(__int64 a1, _DWORD *a2, float a3, float a4)
{
  int v4; // xmm1_4
  int v5; // xmm4_4

  v4 = a2[1];
  v5 = a2[2];
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = v4;
  *(_DWORD *)(a1 + 152) = v5;
  *(float *)(a1 + 156) = a3;
  *(float *)(a1 + 160) = a4;
}
