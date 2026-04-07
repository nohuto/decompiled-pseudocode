/*
 * XREFs of ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x180104448
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004207C (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::HandleScreenRotation(CWindowList *this, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r9
  __int64 (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rbx
  signed int v8; // eax
  const char *v9; // r9
  CWindowList *v10; // rcx
  int updated; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v15[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v6);
  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v14);
    v7 = v14;
    winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v17,
      v14);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, a2, a3);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    v10 = this;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x74B,
                     (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                     v9);
    v12 = v17;
    goto LABEL_10;
  }
  updated = CWindowList::ForceUpdateScene(v10);
  v12 = updated;
  if ( updated >= 0 )
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>(v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74C,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)updated);
LABEL_10:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(v15);
    return v12;
  }
}
