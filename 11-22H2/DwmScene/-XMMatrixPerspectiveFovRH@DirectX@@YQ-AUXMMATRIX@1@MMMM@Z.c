/*
 * XREFs of ?XMMatrixPerspectiveFovRH@DirectX@@YQ?AUXMMATRIX@1@MMMM@Z @ 0x18005E3F8
 * Callers:
 *     ?CreatePerspectiveFieldOfView@Matrix@Math@Utils@Spectre@@SA?AU1234@MMMM@Z @ 0x18005B7EC (-CreatePerspectiveFieldOfView@Matrix@Math@Utils@Spectre@@SA-AU1234@MMMM@Z.c)
 * Callees:
 *     ?XMScalarSinCos@DirectX@@YAXPEAM0M@Z @ 0x18005E4C4 (-XMScalarSinCos@DirectX@@YAXPEAM0M@Z.c)
 */

float __fastcall DirectX::XMMatrixPerspectiveFovRH(__int64 a1, float a2, float *a3, float a4)
{
  float v5; // [rsp+80h] [rbp+10h] BYREF
  float v6; // [rsp+88h] [rbp+18h] BYREF

  DirectX::XMScalarSinCos((DirectX *)&v6, &v5, a3, a4);
  return (float)(v5 / v6) / a2;
}
