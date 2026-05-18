/*
 * XREFs of sub_18001D734 @ 0x18001D734
 * Callers:
 *     sub_18007043C @ 0x18007043C (sub_18007043C.c)
 *     sub_180073DCC @ 0x180073DCC (sub_180073DCC.c)
 * Callees:
 *     _o_floorf @ 0x18000C03C (_o_floorf.c)
 */

__int64 __fastcall sub_18001D734(__int64 a1, float a2, float a3, float a4)
{
  float v5; // xmm0_4
  float v6; // xmm9_4
  float v7; // xmm0_4
  float v8; // xmm10_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm9_4
  int v14; // ecx
  float v15; // xmm2_4
  float v16; // xmm9_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 result; // rax

  v5 = fmaxf(a2, 0.0);
  v6 = fminf(v5, 360.0);
  v7 = fmaxf(a3 / 100.0, 0.0);
  v8 = fminf(v7, 1.0);
  v9 = fmaxf(a4 / 100.0, 0.0);
  v10 = fminf(v9, 1.0);
  v11 = v10;
  if ( v8 == 0.0 )
  {
    v12 = v10;
    goto LABEL_15;
  }
  v13 = v6 / 60.0;
  o_floorf();
  v14 = (int)v13;
  v15 = (float)(1.0 - v8) * v10;
  v16 = v13 - (float)(int)v13;
  v17 = (float)(1.0 - (float)(v16 * v8)) * v10;
  v18 = (float)(1.0 - (float)((float)(1.0 - v16) * v8)) * v10;
  if ( !v14 )
  {
    v12 = (float)(1.0 - (float)((float)(1.0 - v16) * v8)) * v10;
    goto LABEL_14;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    v10 = (float)(1.0 - (float)(v16 * v8)) * v10;
    v12 = v11;
LABEL_14:
    v11 = v15;
    goto LABEL_15;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v12 = (float)(1.0 - v8) * v10;
      if ( v21 == 1 )
        v10 = (float)(1.0 - (float)((float)(1.0 - v16) * v8)) * v10;
      else
        v11 = (float)(1.0 - (float)(v16 * v8)) * v10;
    }
    else
    {
      v10 = (float)(1.0 - v8) * v10;
      v12 = v17;
    }
  }
  else
  {
    v12 = v10;
    v10 = (float)(1.0 - v8) * v10;
    v11 = v18;
  }
LABEL_15:
  result = a1;
  *(float *)(a1 + 8) = v11;
  *(float *)a1 = v10;
  *(float *)(a1 + 4) = v12;
  *(_DWORD *)(a1 + 12) = 1065353216;
  return result;
}
