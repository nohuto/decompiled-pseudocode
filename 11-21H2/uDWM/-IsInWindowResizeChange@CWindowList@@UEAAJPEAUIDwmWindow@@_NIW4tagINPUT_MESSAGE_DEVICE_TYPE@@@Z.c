/*
 * XREFs of ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x180104870
 * Callers:
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180104C10 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ??$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionManagerNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800443FC (--$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Window.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005403C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010204C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x1801052BC (-PostTransition@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Ud.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAA?AW4Variant_Wmasfot@@W4VariantReportingKind@3@_N@Z @ 0x18010720C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAA-AW4V.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWindowList::IsInWindowResizeChange(
        struct CWindowData **this,
        struct IDwmWindow *a2,
        char a3,
        int a4,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  char *v13; // r15
  int SyncedWindowData; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 (__fastcall ***v18)(_QWORD, __int64 *, __int64 *); // rbx
  __int64 (__fastcall ***v20)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v23; // [rsp+68h] [rbp+38h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v12 = v9;
  if ( v9 && (*(_BYTE *)(v9 + 670) & 2) != 0 )
    a3 = 0;
  if ( (((a5 - 4) & 0xFFFFFFFB) == 0
     || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::__private_GetVariant(`wil::Feature<__WilFeatureTraits_Feature_Wmasfot>::GetImpl'::`2'::impl) == 1)
    && (a3 || v12 && (*(_BYTE *)(v12 + 669) & 0x20) != 0) )
  {
    v13 = (char *)(this + 88);
    if ( !this[88] )
    {
      SyncedWindowData = CWindowList::GetSyncedWindowData((CWindowList *)this, a2, 1, this + 88);
      v15 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v16 = 3216LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)SyncedWindowData);
        goto LABEL_27;
      }
    }
    v17 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 && (((*(_BYTE *)(v17 + 669) & 0x20) != 0) != a3 || !v12) )
    {
      *(_BYTE *)(v17 + 669) = (32 * a3) | *(_BYTE *)(v17 + 669) & 0xDF;
      *(_DWORD *)(*(_QWORD *)v13 + 760LL) = a4;
      SyncedWindowData = CWindowList::ApplyWindowResizeStateTransition((CWindowList *)this);
      v15 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v16 = 3230LL;
        goto LABEL_17;
      }
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    1u,
    v10,
    v11);
  if ( v12 && (*(_DWORD *)(v12 + 672) & 0xFFF) == 0x5E )
  {
    if ( *((_BYTE *)this + 698) )
    {
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v23);
      a5 = IMDT_TOUCH|IMDT_MOUSE;
      winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::PostTransition(
        &v23,
        &a5);
      if ( v23 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
      *(_DWORD *)(v12 + 672) &= 0x2000000u;
      *(_DWORD *)(v12 + 672) |= 0xFFFu;
      *((_BYTE *)this + 698) = 0;
    }
    else
    {
      *((_BYTE *)this + 698) = 1;
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v20);
      v18 = v20;
      winrt::impl::as<Udwm::Transitions::ITransitionManagerNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        &v23,
        v20);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 48LL))(v23, *(_QWORD *)(v12 + 448), 6LL);
      winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v23);
      if ( v18 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    }
  }
  v15 = 0;
LABEL_27:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return v15;
}
