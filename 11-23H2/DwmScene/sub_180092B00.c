/*
 * XREFs of sub_180092B00 @ 0x180092B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_180092B00(float *a1, __int64 a2, int a3, char a4, char a5, char a6, char a7, float a8)
{
  char result; // al
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4

  result = a7;
  if ( a4 && a7 )
  {
    v9 = (float)((float)(*((float *)&a2 + 1) * a8) * 0.89999998) + a1[471];
    a1[475] = (float)((float)(*(float *)&a2 * a8) * 0.89999998) + a1[475];
    a1[471] = v9;
  }
  if ( a5 && a7 )
    a1[472] = (float)((float)((float)(*((float *)&a2 + 1) + *(float *)&a2) * a8) * 0.89999998) + a1[472];
  if ( a6 && (!a5 || !a7) )
    a1[472] = (float)((float)-(float)a3 * 0.0099999998) + a1[472];
  v10 = a1[475];
  if ( v10 != 0.0 || a1[471] != 0.0 )
  {
    v11 = a1[471];
    v12 = a1[475];
    v13 = v10 * 0.80000001;
    a1[475] = v13;
    a1[468] = (float)(v12 * a8) + a1[468];
    v14 = v11;
    v15 = v11 * 0.80000001;
    a1[471] = v15;
    a1[469] = (float)(v14 * a8) + a1[469];
    if ( fabs(v13) < 1.0e-12 )
      a1[475] = 0.0;
    if ( fabs(v15) < 1.0e-12 )
      a1[471] = 0.0;
  }
  v16 = a1[472];
  if ( v16 != 0.0 )
  {
    v17 = a1[472];
    v18 = v16 * 0.80000001;
    a1[472] = v18;
    a1[470] = (float)(v17 * a8) + a1[470];
    if ( fabs(v18) < 1.0e-12 )
      a1[472] = 0.0;
  }
  return result;
}
