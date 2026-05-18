/*
 * XREFs of ?TransformVector@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSystem@23@@Z @ 0x18003DE60
 * Callers:
 *     ?GetWorldScale@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C508 (-GetWorldScale@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80 (-Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?TransformNormal@Vector3@Math@Utils@Spectre@@SA?AU1234@AEBU1234@AEBUMatrix@234@@Z @ 0x18003DD7C (-TransformNormal@Vector3@Math@Utils@Spectre@@SA-AU1234@AEBU1234@AEBUMatrix@234@@Z.c)
 */

__int64 __fastcall Spectre::Engine::SceneNode::TransformVector(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __m128 *WorldTransformMatrix; // rax
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v11[4]; // [rsp+60h] [rbp-48h] BYREF

  WorldTransformMatrix = (__m128 *)Spectre::Engine::SceneNode::GetWorldTransformMatrix(a1, v11);
  v6 = WorldTransformMatrix[1];
  v10[0] = *WorldTransformMatrix;
  v7 = WorldTransformMatrix[2];
  v10[1] = v6;
  v8 = WorldTransformMatrix[3];
  v10[2] = v7;
  v10[3] = v8;
  Spectre::Utils::Math::Vector3::TransformNormal(a2, a3, v10);
  return a2;
}
