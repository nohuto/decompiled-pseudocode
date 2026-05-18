/*
 * XREFs of ?XMScalarSinCos@DirectX@@YAXPEAM0M@Z @ 0x18005E4C4
 * Callers:
 *     ?XMMatrixPerspectiveFovRH@DirectX@@YQ?AUXMMATRIX@1@MMMM@Z @ 0x18005E3F8 (-XMMatrixPerspectiveFovRH@DirectX@@YQ-AUXMMATRIX@1@MMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectX::XMScalarSinCos(DirectX *this, float *a2, float *a3, float a4)
{
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm5_4

  v5 = v4 * 0.15915494;
  if ( v4 < 0.0 )
    v6 = v5 - 0.5;
  else
    v6 = v5 + 0.5;
  v7 = v4 - (float)((float)(int)v6 * 6.2831855);
  if ( v7 <= 1.5707964 )
  {
    if ( v7 >= -1.5707964 )
    {
      v9 = FLOAT_1_0;
      goto LABEL_10;
    }
    v8 = FLOAT_N3_1415927;
  }
  else
  {
    v8 = FLOAT_3_1415927;
  }
  v9 = FLOAT_N1_0;
  v7 = v8 - v7;
LABEL_10:
  *(float *)this = (float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0000027525562
                                                                                         - (float)((float)(v7 * v7)
                                                                                                 * 0.000000023889859))
                                                                                 * (float)(v7 * v7))
                                                                         - 0.00019840874)
                                                                 * (float)(v7 * v7))
                                                         + 0.008333331)
                                                 * (float)(v7 * v7))
                                         - 0.16666667)
                                 * (float)(v7 * v7))
                         + 1.0)
                 * v7;
  *a2 = (float)((float)((float)((float)((float)((float)((float)((float)((float)(0.000024760495
                                                                              - (float)((float)(v7 * v7)
                                                                                      * 0.00000026051615))
                                                                      * (float)(v7 * v7))
                                                              - 0.0013888378)
                                                      * (float)(v7 * v7))
                                              + 0.041666638)
                                      * (float)(v7 * v7))
                              - 0.5)
                      * (float)(v7 * v7))
              + 1.0)
      * v9;
}
