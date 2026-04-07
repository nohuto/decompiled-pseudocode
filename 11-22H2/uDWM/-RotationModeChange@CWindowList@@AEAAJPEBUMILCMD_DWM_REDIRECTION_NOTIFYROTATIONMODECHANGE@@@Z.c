/*
 * XREFs of ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18010C464
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18004159C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x18010B9C0 (-PostTransition@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Ud.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::RotationModeChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  signed int v8; // eax
  const char *v9; // r9
  const char *v10; // r9
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
    || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
  {
    v6 = 0;
    goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + 1) )
  {
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
    v4 = *((_QWORD *)this + 69);
    if ( v4 && *(_BYTE *)(v4 + 68) )
      (**(void (__fastcall ***)(__int64, _QWORD))v4)(v4, *(unsigned int *)(v4 + 64));
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                         + 24LL)
                                           + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 6)
                                                              + 24LL));
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D45,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v5);
LABEL_18:
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v12);
      return v6;
    }
    try
    {
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v14);
      v7 = v14;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL))(v14, 1LL);
      if ( v8 < 0 )
        winrt::throw_hresult(v8);
      if ( v7 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    }
    catch ( ... )
    {
      LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x1D4A,
                       (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                       v9);
      v6 = v14;
      goto LABEL_18;
    }
  }
  else
  {
    try
    {
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v15);
      LODWORD(v14) = 1;
      winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::PostTransition(
        &v15,
        (unsigned int *)&v14);
      if ( v15 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    }
    catch ( ... )
    {
      LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x1D51,
                       (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                       v10);
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v12);
      return (unsigned int)v14;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v12);
  return 0LL;
}
