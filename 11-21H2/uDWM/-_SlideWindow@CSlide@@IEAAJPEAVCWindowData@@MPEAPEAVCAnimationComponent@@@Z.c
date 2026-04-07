/*
 * XREFs of ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DB94C
 * Callers:
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DE990 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF690 (-_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF740 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DFA30 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E00F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000D05C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800D0DAC (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D86C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@w.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSlide::_SlideWindow(
        CSlide *this,
        struct CWindowData *a2,
        float a3,
        struct CAnimationComponent **a4)
{
  __int64 v4; // r8
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  struct CAnimationComponent *v15; // rax
  struct CAnimationComponent *v17; // [rsp+58h] [rbp-69h] BYREF
  struct tagPOINT v18; // [rsp+60h] [rbp-61h] BYREF
  struct tagPOINT v19; // [rsp+68h] [rbp-59h] BYREF
  struct tagRECT v20; // [rsp+78h] [rbp-49h]
  __int128 v21; // [rsp+88h] [rbp-39h]
  __int128 v22; // [rsp+98h] [rbp-29h]
  char v23; // [rsp+A8h] [rbp-19h]
  struct tagRECT rc; // [rsp+B8h] [rbp-9h] BYREF
  struct tagRECT v25; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  if ( a4 )
    *a4 = 0LL;
  v17 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetImpl'::`2'::impl,
    0,
    v4,
    (__int64)a4);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  v8 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 168));
  v9 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v8, 0LL, 0LL, -1, 1, &v17);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v20 = *(struct tagRECT *)((char *)v17 + 88);
    rc = v20;
    v25 = v20;
    *(_QWORD *)&v21 = &v17;
    *((_QWORD *)&v21 + 1) = this;
    v22 = v21;
    v23 = 1;
    if ( (int)CWindowPropertyTracker::GetWindowBeginPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *((HWND *)a2 + 5),
                &v18) >= 0
      && (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *((HWND *)a2 + 5),
                &v19) >= 0 )
    {
      OffsetRect(&rc, v18.x - v20.left, v18.y - v20.top);
      OffsetRect(&v25, v19.x - v20.left, v19.y - v20.top);
    }
    v13 = *((_DWORD *)a2 + 168);
    if ( (v13 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 692);
    if ( (v13 & 0x800000) != 0 )
      v25 = *(struct tagRECT *)((char *)a2 + 724);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetImpl'::`2'::impl,
      0,
      v11,
      v12);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v17 + 5), &rc);
    v14 = *((_QWORD *)v17 + 5);
    *(struct tagRECT *)(v14 + 872) = v25;
    CVisual::SetDirtyFlags((CVisual *)(v14 + 8), 4096);
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v17 + 5), a3);
    v15 = v17;
    *a4 = v17;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3,
      (int)"clientcore\\windows\\dwm\\udwm\\storyboard.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  return v10;
}
