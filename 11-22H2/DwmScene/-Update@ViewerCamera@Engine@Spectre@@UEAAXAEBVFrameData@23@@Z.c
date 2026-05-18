/*
 * XREFs of ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500
 * Callers:
 *     <none>
 * Callees:
 *     cosf @ 0x18000C008 (cosf.c)
 *     _o_sinf_0 @ 0x18000C068 (_o_sinf_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     ?Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ @ 0x18003CF20 (-Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ.c)
 *     ?SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003DA80 (-SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?GetInput@FrameData@Engine@Spectre@@QEBAAEBVInput@23@XZ @ 0x1800743C0 (-GetInput@FrameData@Engine@Spectre@@QEBAAEBVInput@23@XZ.c)
 *     ?GetTimeStep@FrameData@Engine@Spectre@@QEBAMXZ @ 0x1800743CC (-GetTimeStep@FrameData@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetCurrAndPreviousFrameData@Input@Engine@Spectre@@QEBAXAEAUPointerEvent@23@0@Z @ 0x180074538 (-GetCurrAndPreviousFrameData@Input@Engine@Spectre@@QEBAXAEAUPointerEvent@23@0@Z.c)
 *     ?GetClosestAllowedDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092C64 (-GetClosestAllowedDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ViewerCamera::Update(
        Spectre::Engine::ViewerCamera *this,
        const struct Spectre::Engine::FrameData *a2,
        __int64 a3,
        float a4)
{
  Spectre::Engine::Input *Input; // rax
  char v7; // si
  bool v8; // r12
  int v9; // r14d
  bool v10; // r13
  bool v11; // di
  int v12; // eax
  Spectre::Utils::Math *v13; // rcx
  __int64 v14; // r9
  float TimeStep; // xmm0_4
  int v16; // eax
  float v17; // xmm6_4
  float ClosestAllowedDistance; // xmm1_4
  __m128 v19; // xmm0
  Spectre::Utils::Math *v20; // rcx
  __m128 v21; // xmm10
  float v22; // xmm6_4
  float v23; // xmm9_4
  unsigned __int32 v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  __m128 v27; // xmm6
  unsigned __int32 v28; // edi
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  __m128 v31; // xmm0
  unsigned __int64 v32; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int32 v33; // [rsp+60h] [rbp-51h]
  unsigned __int64 v34; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int32 v35; // [rsp+70h] [rbp-41h]
  Spectre::Engine::SceneNode *v36; // [rsp+88h] [rbp-29h] BYREF
  std::_Ref_count_base *v37; // [rsp+90h] [rbp-21h]
  unsigned int v38; // [rsp+98h] [rbp-19h]
  __int64 v39; // [rsp+118h] [rbp+67h]

  Input = Spectre::Engine::FrameData::GetInput(a2);
  v34 = 0xBF800000BF800000uLL;
  v36 = (Spectre::Engine::SceneNode *)0xBF800000BF800000LL;
  v37 = (std::_Ref_count_base *)2;
  v38 = 0;
  Spectre::Engine::Input::GetCurrAndPreviousFrameData(
    Input,
    (struct Spectre::Engine::PointerEvent *)&v36,
    (struct Spectre::Engine::PointerEvent *)&v34);
  v7 = BYTE4(v37) & 1;
  v8 = (BYTE4(v37) & 4) != 0;
  v9 = BYTE4(v37) & 8;
  v10 = v9 != 0;
  v11 = (_DWORD)v37 == 1;
  if ( *(float *)&v34 == 0.0
    || (a4 = *((float *)&v34 + 1), *((float *)&v34 + 1) == 0.0)
    || *(float *)&v36 == 0.0
    || *((float *)&v36 + 1) == 0.0 )
  {
    v39 = 0LL;
  }
  else
  {
    *(float *)&v39 = *(float *)&v36 - *(float *)&v34;
    *((float *)&v39 + 1) = *((float *)&v36 + 1) - *((float *)&v34 + 1);
  }
  TimeStep = Spectre::Engine::FrameData::GetTimeStep(a2);
  if ( v7 && v11 )
    goto LABEL_11;
  if ( v12 )
  {
    if ( v11 )
    {
LABEL_11:
      (*(void (__fastcall **)(Spectre::Engine::ViewerCamera *))(*(_QWORD *)this + 216LL))(this);
      goto LABEL_14;
    }
  }
  else if ( v11 )
  {
    goto LABEL_14;
  }
  *((float *)this + 473) = TimeStep + *((float *)this + 473);
LABEL_14:
  v16 = *((_DWORD *)this + 467);
  if ( v16 == 1 )
  {
    LOBYTE(v14) = v7;
    (*(void (__fastcall **)(Spectre::Engine::ViewerCamera *, __int64, _QWORD, __int64, bool, bool, bool, float))(*(_QWORD *)this + 208LL))(
      this,
      v39,
      v38,
      v14,
      v8,
      v10,
      v11,
      COERCE_FLOAT(LODWORD(TimeStep)));
  }
  else if ( v16 == 2 )
  {
    if ( v9 && *((_BYTE *)this + 1864) )
      (*(void (__fastcall **)(Spectre::Engine::ViewerCamera *))(*(_QWORD *)this + 216LL))(this);
    LOBYTE(v14) = v7;
    (*(void (__fastcall **)(Spectre::Engine::ViewerCamera *, __int64, _QWORD, __int64, bool, bool, bool, float))(*(_QWORD *)this + 232LL))(
      this,
      v39,
      v38,
      v14,
      v8,
      v10,
      v11,
      COERCE_FLOAT(LODWORD(TimeStep)));
  }
  if ( *((_DWORD *)this + 467) )
  {
    *((float *)this + 469) = Spectre::Utils::Math::Clamp(v13, *((float *)this + 455), *((float *)this + 456), a4);
    v17 = *((float *)this + 458);
    ClosestAllowedDistance = Spectre::Engine::ViewerCamera::GetClosestAllowedDistance(this);
    v19 = (__m128)*((unsigned int *)this + 470);
    v19.m128_f32[0] = Spectre::Utils::Math::Clamp(v20, ClosestAllowedDistance, v17, a4);
    v21 = v19;
    *((_DWORD *)this + 470) = v19.m128_i32[0];
    v22 = *((float *)this + 469);
    v23 = cosf(v22);
    *(float *)&v24 = v23 * o_sinf_0(*((float *)this + 468));
    v25 = o_sinf_0(v22);
    v26 = cosf(v22);
    *(float *)&v32 = v26 * cosf(*((float *)this + 468));
    *((float *)&v32 + 1) = v25;
    v33 = v24;
    Spectre::Utils::Math::Vector3::Normalize((Spectre::Utils::Math::Vector3 *)&v32);
    v27 = (__m128)*((unsigned __int64 *)this + 225);
    v28 = *((_DWORD *)this + 452);
    v35 = v28;
    v29 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), _mm_movelh_ps((__m128)v32, (__m128)v33));
    v30 = 0LL;
    v30.m128_u64[0] = v29.m128_u64[0];
    v32 = 0LL;
    v31 = _mm_add_ps(
            _mm_movelh_ps(v30, (__m128)_mm_shuffle_ps(v29, v29, 170).m128_u32[0]),
            _mm_movelh_ps(v27, (__m128)v28));
    v33 = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v36);
    v34 = v31.m128_u64[0];
    v35 = v33;
    Spectre::Engine::SceneNode::SetWorldPosition(v36, (__int64)&v34);
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v36);
    v34 = Spectre::Utils::Math::Vector3::Up;
    v35 = 0;
    v32 = v27.m128_u64[0];
    v33 = v28;
    Spectre::Engine::SceneNode::LookAt(v36, &v32, (__int64)&v34);
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
  }
  Spectre::Engine::Camera::Update(this, a2);
}
