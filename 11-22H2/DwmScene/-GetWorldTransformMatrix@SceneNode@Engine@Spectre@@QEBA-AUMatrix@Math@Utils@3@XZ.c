/*
 * XREFs of ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC
 * Callers:
 *     ?GetWorldTransform@SpectreLightNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z @ 0x180012690 (-GetWorldTransform@SpectreLightNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z.c)
 *     ?GetWorldTransform@SpectreNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z @ 0x180014E10 (-GetWorldTransform@SpectreNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z.c)
 *     ?GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003BFCC (-GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334 (-GetWorldPosition@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldTransformMatrixInverse@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C7D8 (-GetWorldTransformMatrixInverse@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003DA80 (-SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?TransformPoint@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSystem@23@@Z @ 0x18003DDF4 (-TransformPoint@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSyst.c)
 *     ?TransformVector@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSystem@23@@Z @ 0x18003DE60 (-TransformVector@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSys.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ?UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DE70 (-UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58 (--DMath@Utils@Spectre@@YA-AUMatrix@012@AEBU3012@0@Z.c)
 *     ?GetTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C2B4 (-GetTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C848 (-GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall Spectre::Engine::SceneNode::GetWorldTransformMatrix(__int64 a1, _OWORD *a2)
{
  unsigned __int64 WorldTransformUpdateID; // r14
  _OWORD *WorldTransformMatrix; // rbx
  __int128 *TransformMatrix; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // rbx
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  Spectre::Engine::SceneNode *v13; // [rsp+20h] [rbp-118h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-110h]
  _BYTE v15[64]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v16[4]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v17[64]; // [rsp+B0h] [rbp-88h] BYREF
  _OWORD v18[4]; // [rsp+F0h] [rbp-48h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess((Spectre::Engine::SceneNode *)a1);
  WorldTransformUpdateID = Spectre::Engine::SceneNode::GetWorldTransformUpdateID((Spectre::Engine::SceneNode *)a1);
  if ( WorldTransformUpdateID > *(_QWORD *)(a1 + 360) )
  {
    Spectre::Engine::SceneNode::GetParent((Spectre::Engine::SceneNode *)a1, &v13);
    if ( v13 )
    {
      WorldTransformMatrix = (_OWORD *)Spectre::Engine::SceneNode::GetWorldTransformMatrix(v13, v15);
      TransformMatrix = Spectre::Engine::SceneNode::GetTransformMatrix(a1, v16);
      v7 = Spectre::Utils::Math::operator*((__int64)v17, TransformMatrix, WorldTransformMatrix);
      v8 = (_OWORD *)(a1 + 288);
    }
    else
    {
      v8 = (_OWORD *)(a1 + 288);
      v7 = Spectre::Engine::SceneNode::GetTransformMatrix(a1, v18);
    }
    v9 = v7[3];
    v10 = v7[2];
    v11 = v7[1];
    *v8 = *v7;
    *(_OWORD *)(a1 + 304) = v11;
    *(_OWORD *)(a1 + 320) = v10;
    *(_OWORD *)(a1 + 336) = v9;
    *(_QWORD *)(a1 + 360) = WorldTransformUpdateID;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  *a2 = *(_OWORD *)(a1 + 288);
  a2[1] = *(_OWORD *)(a1 + 304);
  a2[2] = *(_OWORD *)(a1 + 320);
  a2[3] = *(_OWORD *)(a1 + 336);
  return a2;
}
