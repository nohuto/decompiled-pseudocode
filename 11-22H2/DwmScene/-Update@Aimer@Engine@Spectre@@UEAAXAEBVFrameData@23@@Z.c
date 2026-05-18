/*
 * XREFs of ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80
 * Callers:
 *     <none>
 * Callees:
 *     _o_atan2f_0 @ 0x18000BFF0 (_o_atan2f_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?GetRoot@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003C228 (-GetRoot@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     ?Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ @ 0x18003CF20 (-Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ.c)
 *     ?TransformPoint@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSystem@23@@Z @ 0x18003DDF4 (-TransformPoint@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSyst.c)
 *     ?TransformVector@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSystem@23@@Z @ 0x18003DE60 (-TransformVector@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSys.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     Spectre::Engine::_anonymous_namespace_::RotateVectorAroundY @ 0x180096AEC (Spectre--Engine--_anonymous_namespace_--RotateVectorAroundY.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Aimer::Update(
        Spectre::Engine::Aimer *this,
        const struct Spectre::Engine::FrameData *a2)
{
  Spectre::Engine::SceneNode *v3; // rsi
  __int64 *v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm8_4
  Spectre::Engine::SceneNode *v7; // rbx
  __m128 v8; // xmm7
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __m128 v12; // xmm7
  unsigned __int32 v13; // xmm6_4
  __m128 v14; // xmm7
  __m128 v15; // xmm2
  __m128 v16; // xmm7
  unsigned __int64 v17; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int32 v18; // [rsp+30h] [rbp-41h]
  __int64 v19; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int32 v20; // [rsp+40h] [rbp-31h]
  unsigned __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int32 v22; // [rsp+50h] [rbp-21h]
  __int64 v23; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int32 v24; // [rsp+60h] [rbp-11h]
  Spectre::Engine::SceneNode *v25; // [rsp+68h] [rbp-9h] BYREF
  std::_Ref_count_base *v26; // [rsp+70h] [rbp-1h]
  Spectre::Engine::SceneNode *v27; // [rsp+78h] [rbp+7h] BYREF
  std::_Ref_count_base *v28; // [rsp+80h] [rbp+Fh]
  __int64 v29; // [rsp+88h] [rbp+17h] BYREF
  std::_Ref_count_base *v30; // [rsp+90h] [rbp+1Fh]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v27);
  v3 = v27;
  Spectre::Engine::SceneNode::GetParent(v27, &v29);
  Spectre::Engine::SceneNode::GetRoot(v3, (__int64 *)&v25);
  v19 = *((_QWORD *)this + 14);
  v20 = *((_DWORD *)this + 30);
  Spectre::Engine::SceneNode::TransformPoint((__int64)v25, (__int64)&v21, (unsigned __int64 *)&v19);
  v19 = *(_QWORD *)((char *)this + 124);
  v20 = *((_DWORD *)this + 33);
  Spectre::Engine::SceneNode::TransformPoint((__int64)v25, (__int64)&v17, (unsigned __int64 *)&v19);
  if ( std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 12) || !*((_DWORD *)this + 22) )
  {
    v23 = *((_QWORD *)this + 14);
    v24 = *((_DWORD *)this + 30);
    Spectre::Engine::SceneNode::SetPosition(v3, &v23);
    v23 = Spectre::Utils::Math::Vector3::Up;
    v24 = 0;
    v21 = v17;
    v22 = v18;
    Spectre::Engine::SceneNode::LookAt(v3, &v21, (__int64)&v23);
    *(_QWORD *)((char *)this + 140) = v17;
    *((_DWORD *)this + 37) = v18;
  }
  else
  {
    v19 = Spectre::Utils::Math::Vector3::UnitZ;
    v20 = 1065353216;
    Spectre::Engine::SceneNode::TransformVector(*v4, (__int64)&v23, (unsigned __int64 *)&v19);
    v19 = (unsigned int)v23;
    v20 = v24;
    Spectre::Utils::Math::Vector3::Normalize((Spectre::Utils::Math::Vector3 *)&v19);
    v5 = *(float *)&v20;
    o_atan2f_0();
    o_atan2f_0();
    v6 = (float)(v5 - 1.0) + *((float *)this + 34);
    if ( *((_DWORD *)this + 22) == 2 )
    {
      v7 = v25;
      Spectre::Engine::SceneNode::VerifyReadAccess(v25);
      v24 = *((_DWORD *)v7 + 38);
      v8 = _mm_movelh_ps((__m128)*((unsigned __int64 *)v7 + 18), (__m128)v24);
      v9 = _mm_sub_ps(_mm_movelh_ps((__m128)v17, (__m128)v18), v8);
      v19 = 0LL;
      v20 = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
      v10 = _mm_sub_ps(_mm_movelh_ps((__m128)v21, (__m128)v22), v8);
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
      v23 = v9.m128_u64[0];
      v24 = v20;
      Spectre::Engine::_anonymous_namespace_::RotateVectorAroundY((__int64)&v19, (__int64)&v23, v6);
      v23 = v10.m128_u64[0];
      v24 = v22;
      Spectre::Engine::_anonymous_namespace_::RotateVectorAroundY((__int64)&v21, (__int64)&v23, v6);
      v11 = _mm_add_ps(v8, _mm_movelh_ps((__m128)v21, (__m128)v22));
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
      v23 = v11.m128_u64[0];
      v24 = v22;
      Spectre::Engine::SceneNode::SetPosition(v3, &v23);
      v12 = _mm_add_ps(v8, _mm_movelh_ps((__m128)(unsigned __int64)v19, (__m128)v20));
      v19 = v12.m128_u64[0];
      *((_DWORD *)this + 35) = v12.m128_i32[0];
      *((_DWORD *)this + 36) = HIDWORD(v19);
      *((_DWORD *)this + 37) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
LABEL_5:
      v23 = Spectre::Utils::Math::Vector3::Up;
      v24 = 0;
      v21 = *(_QWORD *)((char *)this + 140);
      v22 = *((_DWORD *)this + 37);
      Spectre::Engine::SceneNode::LookAt(v3, &v21, (__int64)&v23);
      goto LABEL_9;
    }
    if ( *((_DWORD *)this + 22) == 1 )
    {
      v13 = v18;
      v14 = _mm_movelh_ps((__m128)v17, (__m128)v18);
      v15 = _mm_sub_ps(_mm_movelh_ps((__m128)v21, (__m128)v22), v14);
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
      v23 = v15.m128_u64[0];
      v24 = v22;
      Spectre::Engine::_anonymous_namespace_::RotateVectorAroundY((__int64)&v21, (__int64)&v23, v6);
      *(_QWORD *)((char *)this + 140) = v17;
      *((_DWORD *)this + 37) = v13;
      v16 = _mm_add_ps(v14, _mm_movelh_ps((__m128)v21, (__m128)v22));
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      v23 = v16.m128_u64[0];
      v24 = v22;
      Spectre::Engine::SceneNode::SetPosition(v3, &v23);
      goto LABEL_5;
    }
  }
LABEL_9:
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
}
