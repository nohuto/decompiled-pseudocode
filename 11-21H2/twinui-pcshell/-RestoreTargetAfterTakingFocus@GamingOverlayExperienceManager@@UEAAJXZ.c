/*
 * XREFs of ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x18033197C (-GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18033ACB0 (-TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::RestoreTargetAfterTakingFocus(GamingOverlayExperienceManager *this)
{
  int v2; // eax
  GamingOverlayExperienceManager *v3; // rcx
  HWND ParentIfCoreWindow; // rdi
  HWND Ancestor; // rax
  const char *v6; // r9
  HWND LastActivePopup; // rax
  int FocusedWindow; // eax
  unsigned int v10; // ebx
  WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_QWORD *)this + 146) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 24LL))(*((_QWORD *)this + 22));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE83,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    ParentIfCoreWindow = GamingOverlayExperienceManager::GetParentIfCoreWindow(v3, *((HWND *)this + 146));
    Ancestor = GetAncestor(*((HWND *)this + 146), 2u);
    *(_OWORD *)&wndpl.length = 0LL;
    if ( Ancestor )
      ParentIfCoreWindow = Ancestor;
    wndpl.length = 44;
    memset(&wndpl.ptMinPosition.y, 0, 28);
    if ( !GetWindowPlacement(ParentIfCoreWindow, &wndpl) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xE8F,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        v6);
    if ( ((wndpl.showCmd - 2) & 0xFFFFFFFB) == 0 )
    {
      LastActivePopup = GetLastActivePopup(ParentIfCoreWindow);
      SwitchToThisWindow(LastActivePopup, 1);
    }
    SetForegroundWindow(ParentIfCoreWindow);
    return 0LL;
  }
  FocusedWindow = GamingOverlayExperienceManager::TriggerOnLastFocusedWindow(this);
  v10 = FocusedWindow;
  if ( FocusedWindow >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE9D,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)FocusedWindow);
  return v10;
}
