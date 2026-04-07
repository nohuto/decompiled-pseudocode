/*
 * XREFs of ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180105E24
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180037E58 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003FA6C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x1801052BC (-PostTransition@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Ud.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::RotationModeChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *a2)
{
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r9
  unsigned int v9; // ebx
  signed int v10; // eax
  const char *v11; // r9
  const char *v12; // r9
  int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v4);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
    || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
  {
LABEL_16:
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v14);
    return 0LL;
  }
  if ( !*((_DWORD *)a2 + 1) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
      1u,
      3u,
      v5);
    try
    {
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v17);
      LODWORD(v16) = 1;
      winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::PostTransition(
        &v17,
        (unsigned int *)&v16);
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    }
    catch ( ... )
    {
      LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x1D06,
                       (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                       v12);
      v9 = v16;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
  v6 = *((_QWORD *)this + 71);
  if ( v6 && *(_BYTE *)(v6 + 68) )
    (**(void (__fastcall ***)(__int64, _QWORD))v6)(v6, *(unsigned int *)(v6 + 64));
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL));
  v9 = v7;
  if ( v7 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
      1u,
      3u,
      v8);
    try
    {
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v16);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, 1LL);
      if ( v10 < 0 )
        winrt::throw_hresult(v10);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    }
    catch ( ... )
    {
      LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x1CF7,
                       (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                       v11);
      v9 = v16;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CF0,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v7);
LABEL_18:
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v14);
  return v9;
}
