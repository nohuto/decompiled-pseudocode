/*
 * XREFs of ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334
 * Callers:
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800696D0 (-UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA?AV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@AEBVCamera@23@@Z @ 0x180095840 (-GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA-AV-$vector@PEAVSceneNod.c)
 *     ?Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@Utils@3@AEAV?$vector@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@V?$allocator@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@@Z @ 0x1800959E0 (-Traverse@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBAXAEBVCamera@23@UVector3@Math@.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?Transform@Vector3@Math@Utils@Spectre@@SA?AU1234@AEBU1234@AEBUMatrix@234@@Z @ 0x18003DCF4 (-Transform@Vector3@Math@Utils@Spectre@@SA-AU1234@AEBU1234@AEBUMatrix@234@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::SceneNode::GetWorldPosition(Spectre::Engine::SceneNode *a1, __int64 a2)
{
  char v4; // si
  _QWORD *Parent; // rax
  _OWORD *WorldTransformMatrix; // rax
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-81h]
  __int64 v10; // [rsp+38h] [rbp-79h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-71h]
  _OWORD v12[4]; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v13[4]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v14[64]; // [rsp+C8h] [rbp+17h] BYREF

  v4 = 0;
  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  if ( *Spectre::Engine::SceneNode::GetParent(a1, &v10) )
  {
    Parent = Spectre::Engine::SceneNode::GetParent(a1, &v8);
    v4 = 1;
    WorldTransformMatrix = (_OWORD *)Spectre::Engine::SceneNode::GetWorldTransformMatrix(*Parent, v14);
  }
  else
  {
    v12[0] = Spectre::Utils::Math::Matrix::Identity;
    v12[1] = xmmword_180106A40;
    v12[2] = xmmword_180106A50;
    v12[3] = xmmword_180106A60;
    WorldTransformMatrix = v12;
  }
  v13[0] = *WorldTransformMatrix;
  v13[1] = WorldTransformMatrix[1];
  v13[2] = WorldTransformMatrix[2];
  v13[3] = WorldTransformMatrix[3];
  if ( (v4 & 1) != 0 && v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  Spectre::Utils::Math::Vector3::Transform(a2, (char *)a1 + 144, v13);
  return a2;
}
