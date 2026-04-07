/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BA0B8
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BA030 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800513E8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800AD6B8 (--$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B81B4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800BA8AC (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z @ 0x1800C1204 (-Update@CGaussianBlurEffectProxy@@QEAAJMII@Z.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::ScheduleEntranceAnimations(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  int v3; // eax
  CVisual *v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // edx
  LONG v9; // eax
  LONG v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  CGaussianBlurEffectProxy **v14; // rdi
  __int64 v15; // rcx
  int v16; // esi
  unsigned int v17; // r8d
  __int64 v18; // rdx
  bool v19; // zf
  struct tagRECT v20; // xmm6
  __int64 v21; // rax
  CVisual *v22; // rcx
  int v23; // eax
  LONG v24; // eax
  __int64 v25; // rcx
  LONG v26; // eax
  int v27; // eax
  unsigned int v28; // ebx
  struct tagRECT v29; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v30; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  CAnimatedTransitionVisual::SetBeginRect(
    *((struct tagPOINT **)this + 57),
    (const struct tagRECT *)(*((_QWORD *)this + 55) + 56LL));
  v2 = *((_QWORD *)this + 57);
  *(_OWORD *)(v2 + 872) = *(_OWORD *)(*((_QWORD *)this + 55) + 56LL);
  v3 = *(_DWORD *)(v2 + 96);
  v4 = (CVisual *)(v2 + 8);
  if ( (v3 & 0x1000) == 0 )
  {
    *((_DWORD *)v4 + 22) = v3 | 0x1000;
    CVisual::PropagateDirtyChildren(v4);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 55);
  v6 = *((_QWORD *)this + 57) + 8LL;
  v7 = v5[17] - v5[15];
  v8 = v5[16] - v5[14];
  v9 = 0;
  if ( v8 >= 0 )
    v9 = v8;
  v30.left = v9;
  v10 = 0;
  if ( v7 >= 0 )
    v10 = v7;
  v30.top = v10;
  (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v6 + 104LL))(v6, &v30);
  v11 = CDisplayAnimatedVisual::ScheduleAnimation(
          (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 288),
          *((struct CAnimatedTransitionVisual **)this + 57),
          (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
          *((unsigned int *)this + 88),
          *((_DWORD *)this + 89),
          (unsigned int *)this + 129);
  if ( v11 < 0 )
  {
    v12 = 365LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v14 = (CGaussianBlurEffectProxy **)((char *)this + 496);
  if ( !*((_QWORD *)this + 62) )
  {
    v15 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v14 = 0LL;
    v16 = CCompositor::CreateProxy<CGaussianBlurEffectProxy>(v15, (CBaseObject **)this + 62);
    if ( v16 < 0 )
    {
      v18 = 372LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
        (const char *)(unsigned int)v16);
      return (unsigned int)v16;
    }
    v16 = CGaussianBlurEffectProxy::Update(*v14, 25.0, v17, 0);
    if ( v16 < 0 )
    {
      v18 = 376LL;
      goto LABEL_13;
    }
  }
  v11 = CVisualProxy::SetEffect(*(CVisualProxy **)(*((_QWORD *)this + 61) + 24LL), *v14);
  if ( v11 < 0 )
  {
    v12 = 379LL;
    goto LABEL_9;
  }
  v19 = *((_BYTE *)this + 536) == 0;
  v20 = *(struct tagRECT *)(*((_QWORD *)this + 56) + 56LL);
  v30 = v20;
  if ( !v19 )
  {
    v20 = *TransposeRectAroundCenter(&v29, &v30);
    v30 = v20;
  }
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)this + 61), &v30);
  v21 = *((_QWORD *)this + 61);
  v22 = (CVisual *)(v21 + 8);
  *(struct tagRECT *)(v21 + 872) = v20;
  v23 = *(_DWORD *)(v21 + 96);
  if ( (v23 & 0x1000) == 0 )
  {
    *((_DWORD *)v22 + 22) = v23 | 0x1000;
    CVisual::PropagateDirtyChildren(v22);
  }
  v24 = 0;
  v25 = *((_QWORD *)this + 61) + 8LL;
  if ( v30.right - v30.left >= 0 )
    v24 = v30.right - v30.left;
  v30.left = v24;
  v26 = 0;
  if ( v30.bottom - v30.top >= 0 )
    v26 = v30.bottom - v30.top;
  v30.top = v26;
  (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v25 + 104LL))(v25, &v30);
  v11 = CDisplayAnimatedVisual::ScheduleAnimation(
          (CDisplayAnimatedVisual *)*((unsigned int *)this + 89),
          *((struct CAnimatedTransitionVisual **)this + 61),
          (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
          *((unsigned int *)this + 88),
          *((_DWORD *)this + 89),
          (unsigned int *)this + 131);
  if ( v11 < 0 )
  {
    v12 = 397LL;
    goto LABEL_9;
  }
  v27 = CDisplayAnimatedVisual::ScheduleAnimation(
          (struct IAnimatedVisual *)*((unsigned int *)this + 89),
          (_QWORD *)this + 58,
          (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
          *((_DWORD *)this + 88),
          *((_DWORD *)this + 89),
          (unsigned int *)this + 133);
  v28 = v27;
  if ( v27 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x195,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v27);
  return v28;
}
