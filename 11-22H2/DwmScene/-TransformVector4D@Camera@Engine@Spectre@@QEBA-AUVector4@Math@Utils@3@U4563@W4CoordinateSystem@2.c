/*
 * XREFs of ?TransformVector4D@Camera@Engine@Spectre@@QEBA?AUVector4@Math@Utils@3@U4563@W4CoordinateSystem@23@1W4VectorTensorVariance@23@@Z @ 0x18005D758
 * Callers:
 *     ?TransformPoint@Camera@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4CoordinateSystem@23@1@Z @ 0x18005D694 (-TransformPoint@Camera@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@U4563@W4CoordinateSystem@23@1.c)
 * Callees:
 *     ?InternalTransformVector4D@Camera@Engine@Spectre@@AEBA?AUVector4@Math@Utils@3@U4563@PEBUMatrix@563@W4CoordinateSystem@23@21W4VectorTensorVariance@23@@Z @ 0x18005BC74 (-InternalTransformVector4D@Camera@Engine@Spectre@@AEBA-AUVector4@Math@Utils@3@U4563@PEBUMatrix@5.c)
 */

__int64 __fastcall Spectre::Engine::Camera::TransformVector4D(Spectre::Engine::Camera *a1, __int64 a2, __int128 *a3)
{
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = *a3;
  Spectre::Engine::Camera::InternalTransformVector4D(a1, a2, (__int64)&v5);
  return a2;
}
