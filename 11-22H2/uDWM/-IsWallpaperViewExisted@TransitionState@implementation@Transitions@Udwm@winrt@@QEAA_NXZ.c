/*
 * XREFs of ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1801023D4
 * Callers:
 *     ?get_IsWallpaperViewExisted@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1801040A0 (-get_IsWallpaperViewExisted@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UI.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003918C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180052D5C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

char __fastcall winrt::Udwm::Transitions::implementation::TransitionState::IsWallpaperViewExisted(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  BOOL v7; // eax
  __int64 v8; // r8
  HWND ShellWindowForDesktop; // rax
  winrt::Udwm::Transitions::implementation::TransitionState *pvParam; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  pvParam = this;
  v3 = 1;
  GetDesktopID(1LL, &v11, a3);
  if ( CDesktopManager::IsLogonDesktop(v11, v4, v5) )
    return 0;
  LODWORD(pvParam) = 0;
  v7 = SystemParametersInfoW(0xAAu, 0, &pvParam, 0);
  LODWORD(pvParam) = v7 ? (unsigned int)pvParam : 0;
  GetDesktopID(1LL, &v11, v8);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                            v11);
  if ( (_DWORD)pvParam || !ShellWindowForDesktop )
    return 0;
  return v3;
}
