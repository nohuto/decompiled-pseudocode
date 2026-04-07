/*
 * XREFs of ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x18010A9F0
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180040C04 (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::HandleScreenRotation(CWindowList *this, unsigned int a2, unsigned int a3)
{
  __int64 (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rbx
  __int64 v7; // rdi
  signed int v8; // eax
  const char *v9; // r9
  CWindowList *v10; // rcx
  int updated; // eax
  unsigned int v12; // ebx
  int v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v15[4])(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)v15);
    v6 = v15[0];
    winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v17,
      v15[0]);
    v7 = v17;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, a2, a3);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v15);
    v10 = this;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x7B8,
                     (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                     v9);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v14);
    return (unsigned int)v17;
  }
  updated = CWindowList::ForceUpdateScene(v10);
  v12 = updated;
  if ( updated >= 0 )
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)updated);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v14);
    return v12;
  }
}
