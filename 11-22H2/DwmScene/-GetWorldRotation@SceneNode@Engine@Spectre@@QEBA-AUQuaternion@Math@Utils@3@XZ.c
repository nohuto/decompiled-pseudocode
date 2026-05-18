/*
 * XREFs of ?GetWorldRotation@SceneNode@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x18003C440
 * Callers:
 *     ?GetWorldRotation@SceneNode@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x18003C440 (-GetWorldRotation@SceneNode@Engine@Spectre@@QEBA-AUQuaternion@Math@Utils@3@XZ.c)
 *     ?SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003DBA8 (-SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800696D0 (-UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ??DMath@Utils@Spectre@@YA?AUQuaternion@012@AEBU3012@0@Z @ 0x18003B5A8 (--DMath@Utils@Spectre@@YA-AUQuaternion@012@AEBU3012@0@Z.c)
 *     ?GetWorldRotation@SceneNode@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x18003C440 (-GetWorldRotation@SceneNode@Engine@Spectre@@QEBA-AUQuaternion@Math@Utils@3@XZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__m128 *__fastcall Spectre::Engine::SceneNode::GetWorldRotation(__int64 a1, __m128 *a2)
{
  char v4; // di
  _QWORD *Parent; // rax
  __m128 *WorldRotation; // rax
  __m128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+48h] [rbp-20h]
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  Spectre::Engine::SceneNode::VerifyReadAccess((Spectre::Engine::SceneNode *)a1);
  if ( *Spectre::Engine::SceneNode::GetParent((Spectre::Engine::SceneNode *)a1, &v11) )
  {
    Parent = Spectre::Engine::SceneNode::GetParent((Spectre::Engine::SceneNode *)a1, &v9);
    v4 = 1;
    WorldRotation = (__m128 *)Spectre::Engine::SceneNode::GetWorldRotation(*Parent, v13);
  }
  else
  {
    v8 = (__m128)Spectre::Utils::Math::Quaternion::Identity;
    WorldRotation = &v8;
  }
  v8 = *WorldRotation;
  if ( (v4 & 1) != 0 && v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  Spectre::Utils::Math::operator*(a2, (__m128 *)(a1 + 156), &v8);
  return a2;
}
