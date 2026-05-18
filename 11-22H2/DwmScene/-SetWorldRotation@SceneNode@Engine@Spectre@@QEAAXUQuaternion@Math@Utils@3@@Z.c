/*
 * XREFs of ?SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003DBA8
 * Callers:
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ??DMath@Utils@Spectre@@YA?AUQuaternion@012@AEBU3012@0@Z @ 0x18003B5A8 (--DMath@Utils@Spectre@@YA-AUQuaternion@012@AEBU3012@0@Z.c)
 *     ?GetWorldRotation@SceneNode@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x18003C440 (-GetWorldRotation@SceneNode@Engine@Spectre@@QEBA-AUQuaternion@Math@Utils@3@XZ.c)
 *     ?SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003D868 (-SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::SceneNode::SetWorldRotation(Spectre::Engine::SceneNode *a1, __m128 *a2)
{
  char v4; // bl
  __int64 *Parent; // rax
  __m128 *WorldRotation; // rax
  __m128 v7; // xmm6
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-38h]
  std::_Ref_count_base *v16[2]; // [rsp+40h] [rbp-30h] BYREF
  __m128 v17; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  if ( *Spectre::Engine::SceneNode::GetParent(a1, v16) )
  {
    Parent = Spectre::Engine::SceneNode::GetParent(a1, &v14);
    v4 = 1;
    WorldRotation = Spectre::Engine::SceneNode::GetWorldRotation(*Parent, &v17);
  }
  else
  {
    v13 = Spectre::Utils::Math::Quaternion::Identity;
    WorldRotation = (__m128 *)&v13;
  }
  v7 = (__m128)_mm_loadu_si128((const __m128i *)WorldRotation);
  if ( (v4 & 1) != 0 && v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v16[1] )
    std::_Ref_count_base::_Decref(v16[1]);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_add_ps(_mm_shuffle_ps(v7, v8, 64), v8);
  v10 = _mm_add_ps(_mm_shuffle_ps(v8, v9, 48), v9);
  v11 = _mm_shuffle_ps(v10, v10, 170);
  v12 = _mm_cmple_ps(v11, DirectX::g_XMEpsilon);
  *(__m128 *)v16 = _mm_or_ps(
                     _mm_andnot_ps(
                       v12,
                       _mm_div_ps(_mm_mul_ps(v7, (__m128)`DirectX::XMQuaternionConjugate'::`2'::NegativeOne3), v11)),
                     _mm_and_ps(v12, DirectX::g_XMZero));
  *(__m128 *)v16 = *Spectre::Utils::Math::operator*(&v17, a2, (__m128 *)v16);
  Spectre::Engine::SceneNode::SetRotation(a1, v16);
}
