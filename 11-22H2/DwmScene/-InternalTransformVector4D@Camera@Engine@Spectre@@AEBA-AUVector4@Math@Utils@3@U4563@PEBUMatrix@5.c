/*
 * XREFs of ?InternalTransformVector4D@Camera@Engine@Spectre@@AEBA?AUVector4@Math@Utils@3@U4563@PEBUMatrix@563@W4CoordinateSystem@23@21W4VectorTensorVariance@23@@Z @ 0x18005BC74
 * Callers:
 *     ?TransformVector4D@Camera@Engine@Spectre@@QEBA?AUVector4@Math@Utils@3@U4563@W4CoordinateSystem@23@1W4VectorTensorVariance@23@@Z @ 0x18005D758 (-TransformVector4D@Camera@Engine@Spectre@@QEBA-AUVector4@Math@Utils@3@U4563@W4CoordinateSystem@2.c)
 * Callees:
 *     ?GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z @ 0x18005BB34 (-GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z.c)
 *     ?Transform@Vector4@Math@Utils@Spectre@@SA?AU1234@AEBU1234@AEBUMatrix@234@@Z @ 0x18005D620 (-Transform@Vector4@Math@Utils@Spectre@@SA-AU1234@AEBU1234@AEBUMatrix@234@@Z.c)
 */

__int64 __fastcall Spectre::Engine::Camera::InternalTransformVector4D(
        Spectre::Engine::Camera *a1,
        __int64 a2,
        __int64 a3)
{
  _OWORD *TransformMatrix; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  TransformMatrix = (_OWORD *)Spectre::Engine::Camera::GetTransformMatrix(a1, 2, 1);
  v6 = TransformMatrix[1];
  v10[0] = *TransformMatrix;
  v7 = TransformMatrix[2];
  v10[1] = v6;
  v8 = TransformMatrix[3];
  v10[2] = v7;
  v10[3] = v8;
  Spectre::Utils::Math::Vector4::Transform(a2, a3, v10);
  return a2;
}
