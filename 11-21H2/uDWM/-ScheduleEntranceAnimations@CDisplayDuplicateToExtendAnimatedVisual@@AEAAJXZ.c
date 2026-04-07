/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6958
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B68D0 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180027C54 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800A854C (--$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800B713C (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z @ 0x1800BD2B4 (-Update@CGaussianBlurEffectProxy@@QEAAJMII@Z.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::ScheduleEntranceAnimations(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // edx
  LONG v7; // eax
  LONG v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  CGaussianBlurEffectProxy **v12; // rdi
  struct CResourceProxy *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  bool v17; // zf
  struct tagRECT v18; // xmm6
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // edx
  LONG v23; // eax
  LONG v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  struct tagRECT v27; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v28; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  CAnimatedTransitionVisual::SetBeginRect(
    *((struct tagPOINT **)this + 57),
    (const struct tagRECT *)(*((_QWORD *)this + 55) + 56LL));
  v2 = *((_QWORD *)this + 57);
  *(_OWORD *)(v2 + 872) = *(_OWORD *)(*((_QWORD *)this + 55) + 56LL);
  CVisual::SetDirtyFlags((CVisual *)(v2 + 8), 4096);
  v3 = (_DWORD *)*((_QWORD *)this + 55);
  v4 = *((_QWORD *)this + 57) + 8LL;
  v5 = v3[17] - v3[15];
  v6 = v3[16] - v3[14];
  v7 = 0;
  if ( v6 >= 0 )
    v7 = v6;
  v28.left = v7;
  v8 = 0;
  if ( v5 >= 0 )
    v8 = v5;
  v28.top = v8;
  (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v4 + 96LL))(v4, &v28);
  v9 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 89),
         *((struct CAnimatedTransitionVisual **)this + 57),
         (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 89),
         (unsigned int *)this + 129);
  if ( v9 < 0 )
  {
    v10 = 365LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = (CGaussianBlurEffectProxy **)((char *)this + 496);
  v13 = (struct CResourceProxy *)*((_QWORD *)this + 62);
  if ( !v13 )
  {
    v14 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
    *v12 = 0LL;
    v15 = CCompositor::CreateProxy<CGaussianBlurEffectProxy>(v14, (CBaseObject **)this + 62);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
    v9 = CGaussianBlurEffectProxy::Update(*v12, 25.0, 1u, 0);
    if ( v9 < 0 )
    {
      v10 = 376LL;
      goto LABEL_7;
    }
    v13 = (struct CResourceProxy *)*((_QWORD *)this + 62);
  }
  v9 = CVisualProxy::SetEffect(*(CVisualProxy **)(*((_QWORD *)this + 61) + 24LL), v13);
  if ( v9 < 0 )
  {
    v10 = 379LL;
    goto LABEL_7;
  }
  v17 = *((_BYTE *)this + 536) == 0;
  v18 = *(struct tagRECT *)(*((_QWORD *)this + 56) + 56LL);
  v28 = v18;
  if ( !v17 )
  {
    v18 = *TransposeRectAroundCenter(&v27, &v28);
    v28 = v18;
  }
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)this + 61), &v28);
  v19 = *((_QWORD *)this + 61);
  *(struct tagRECT *)(v19 + 872) = v18;
  CVisual::SetDirtyFlags((CVisual *)(v19 + 8), 4096);
  v20 = *((_QWORD *)this + 61) + 8LL;
  v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 8)) - _mm_cvtsi128_si32((__m128i)v18);
  v22 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 4));
  v23 = 0;
  if ( v21 >= 0 )
    v23 = v21;
  v28.left = v23;
  v24 = 0;
  if ( v22 >= 0 )
    v24 = v22;
  v28.top = v24;
  (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v20 + 96LL))(v20, &v28);
  v9 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 89),
         *((struct CAnimatedTransitionVisual **)this + 61),
         (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 89),
         (unsigned int *)this + 131);
  if ( v9 < 0 )
  {
    v10 = 397LL;
    goto LABEL_7;
  }
  v25 = CDisplayAnimatedVisual::ScheduleAnimation(
          (struct IAnimatedVisual *)*((unsigned int *)this + 89),
          (_QWORD *)this + 58,
          (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 288),
          *((_DWORD *)this + 88),
          *((_DWORD *)this + 89),
          (unsigned int *)this + 133);
  v26 = v25;
  if ( v25 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x195,
    (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v25);
  return v26;
}
