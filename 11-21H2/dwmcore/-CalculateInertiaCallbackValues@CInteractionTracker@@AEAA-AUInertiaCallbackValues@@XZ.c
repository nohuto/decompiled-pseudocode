/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1802196D8
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18011412C (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18021E304 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802205C0 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1802215A8 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180113E04 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x18021B180 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18021B2B4 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18021B2D4 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x18025445C (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1802555C8 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180255680 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1802556E8 (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180255B08 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180255BBC (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180255C14 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x18025F078 (-GetModifiedRestingValue@CMotion@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::CalculateInertiaCallbackValues(__int64 a1, __int64 a2)
{
  CInteractionTracker *v4; // rcx
  bool HasImpulse; // al
  __int64 v6; // rcx
  int v7; // xmm6_4
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  CScrollAnimation *v10; // rcx
  __int64 v11; // rcx
  CMotion *v12; // rax
  __m128 v13; // xmm6
  CMotion *v14; // rax
  __int64 v15; // rcx
  CMotion *v16; // rax
  __int64 v17; // rcx
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // rcx
  bool v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm3_4
  int v27; // xmm2_4
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // xmm0_4
  __m128 v33; // xmm2
  unsigned __int64 v34; // xmm1_8
  __m128 v35; // xmm2
  int v36; // eax
  int v37; // xmm0_4
  __m128 v38; // xmm1
  int v39; // xmm0_4
  int v40; // eax
  int v41; // eax
  CScrollScaleKeyframeAnimation *v42; // rcx
  float NaturalEndpoint; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  unsigned int v46; // xmm1_4
  unsigned int v47; // xmm1_4
  int v48; // xmm0_4
  __m128 v49; // xmm2
  unsigned __int64 v50; // xmm1_8
  int v51; // eax
  int v52; // xmm0_4
  int v53; // xmm1_4
  int v54; // eax
  unsigned int v56; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v57; // [rsp+24h] [rbp-5Ch]
  int v58; // [rsp+28h] [rbp-58h]
  unsigned int v59; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+34h] [rbp-4Ch]
  int v61; // [rsp+38h] [rbp-48h]
  unsigned int v62; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v63; // [rsp+44h] [rbp-3Ch]
  int v64; // [rsp+48h] [rbp-38h]
  int v65; // [rsp+58h] [rbp-28h]

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
  {
    HasImpulse = CInteractionTracker::HasImpulse(v4);
    v6 = *(_QWORD *)(a1 + 336);
    *(_BYTE *)(a2 + 53) = HasImpulse;
    v7 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 328LL))(v6) + 48);
    v8 = (__m128)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 328LL))(*(_QWORD *)(a1 + 344))
                                 + 48);
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 4) = v8.m128_i32[0];
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 328LL))(*(_QWORD *)(a1 + 328))
                                     + 48);
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 336));
    v9 = v8;
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 344));
    v64 = 0;
    v10 = *(CScrollAnimation **)(a1 + 328);
    *(_QWORD *)(a2 + 16) = _mm_unpacklo_ps(v9, v8).m128_u64[0];
    *(_DWORD *)(a2 + 24) = 0;
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(v10);
    v11 = *(_QWORD *)(a1 + 336);
    *(_DWORD *)(a2 + 28) = v8.m128_i32[0];
    v12 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 328LL))(v11);
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v12);
    v13 = v8;
    v14 = (CMotion *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 328LL))(*(_QWORD *)(a1 + 344));
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v14);
    v15 = *(_QWORD *)(a1 + 328);
    v64 = 0;
    *(_QWORD *)(a2 + 32) = _mm_unpacklo_ps(v13, v8).m128_u64[0];
    *(_DWORD *)(a2 + 40) = 0;
    v16 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 328LL))(v15);
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v16);
    v17 = *(_QWORD *)(a1 + 336);
    *(_DWORD *)(a2 + 48) = v8.m128_i32[0];
    v18 = 1;
    v19 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 328LL))(v17) + 96);
    v21 = 0;
    if ( !v19 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19) )
    {
      v20 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 328LL))(*(_QWORD *)(a1 + 344)) + 96);
      if ( !v20 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20) )
        v21 = 1;
    }
    v22 = *(_QWORD *)(a1 + 328);
    *(_BYTE *)(a2 + 44) = v21;
    v23 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 328LL))(v22) + 96);
    if ( v23 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
    *(_BYTE *)(a2 + 52) = v18;
  }
  else
  {
    v24 = *((_DWORD *)v4 + 20);
    v25 = *((_DWORD *)v4 + 21);
    v26 = *((_DWORD *)v4 + 22);
    v27 = *((_DWORD *)v4 + 34);
    if ( CInteractionTracker::HasDefaultAnimations(v4) )
    {
      *(_WORD *)(v28 + 52) = 257;
      *(_BYTE *)(v28 + 44) = 1;
      *(_DWORD *)(v28 + 16) = v24;
      *(_DWORD *)(v28 + 20) = v25;
      *(_DWORD *)(v28 + 24) = v26;
      v30 = *(_QWORD *)(v29 + 464);
      v31 = *(_DWORD *)(v28 + 24);
      *(_QWORD *)(v28 + 32) = *(_QWORD *)(v28 + 16);
      *(_DWORD *)(v28 + 40) = v31;
      *(_DWORD *)(v28 + 28) = v27;
      *(_DWORD *)(v28 + 48) = v27;
      if ( v30 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v30, &v62);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(*(_QWORD *)(a1 + 464), &v59);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(*(_QWORD *)(a1 + 464), &v56);
        v32 = v58;
        v33 = (__m128)v60;
        *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)v56, (__m128)v57).m128_u64[0];
        v34 = _mm_unpacklo_ps((__m128)v59, v33).m128_u64[0];
        v35 = (__m128)v63;
        v36 = v32;
        v37 = v61;
        *(_QWORD *)(a2 + 32) = v34;
        v38 = (__m128)v62;
        v65 = v37;
        v39 = v64;
        *(_DWORD *)(a2 + 8) = v36;
        v40 = v65;
        v65 = v39;
        *(_DWORD *)(a2 + 40) = v40;
        v41 = v65;
        *(_QWORD *)(a2 + 16) = _mm_unpacklo_ps(v38, v35).m128_u64[0];
        *(_DWORD *)(a2 + 24) = v41;
      }
      v42 = *(CScrollScaleKeyframeAnimation **)(a1 + 472);
      if ( v42 )
      {
        NaturalEndpoint = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v42);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*(CScrollScaleKeyframeAnimation **)(a1 + 472));
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(*(CScrollScaleKeyframeAnimation **)(a1 + 472));
        v46 = *(_DWORD *)(a2 + 36);
        *(float *)(a2 + 12) = ScaleVelocity;
        v62 = *(_DWORD *)(a2 + 32);
        v64 = *(_DWORD *)(a2 + 40);
        *(float *)(a2 + 48) = LastKeyframeValueForScale;
        *(float *)(a2 + 28) = NaturalEndpoint;
        v63 = v46;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v59, &v62);
        v47 = *(_DWORD *)(a2 + 20);
        v62 = *(_DWORD *)(a2 + 16);
        v64 = *(_DWORD *)(a2 + 24);
        v63 = v47;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v56, &v62);
        v48 = v61;
        v49 = (__m128)v57;
        *(_QWORD *)(a2 + 32) = _mm_unpacklo_ps((__m128)v59, (__m128)v60).m128_u64[0];
        v50 = _mm_unpacklo_ps((__m128)v56, v49).m128_u64[0];
        v65 = v58;
        *(_DWORD *)(a2 + 40) = v48;
        v51 = v65;
        *(_QWORD *)(a2 + 16) = v50;
        *(_DWORD *)(a2 + 24) = v51;
      }
    }
    else
    {
      *(_DWORD *)(v28 + 32) = v24;
      *(_DWORD *)(v28 + 36) = v25;
      *(_DWORD *)(v28 + 40) = v26;
      v52 = *(_DWORD *)(v29 + 84);
      v53 = *(_DWORD *)(v29 + 88);
      v54 = *(_DWORD *)(v29 + 80);
      *(_DWORD *)(v28 + 48) = v27;
      *(_DWORD *)(v28 + 16) = v54;
      *(_DWORD *)(v28 + 20) = v52;
      *(_DWORD *)(v28 + 24) = v53;
      *(_DWORD *)(v28 + 28) = v27;
      *(_DWORD *)v28 = 0;
      *(_DWORD *)(v28 + 4) = 0;
      *(_DWORD *)(v28 + 8) = 0;
      *(_DWORD *)(v28 + 12) = 0;
    }
  }
  return a2;
}
