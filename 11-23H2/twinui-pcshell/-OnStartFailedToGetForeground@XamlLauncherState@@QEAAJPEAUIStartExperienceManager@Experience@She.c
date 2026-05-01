/*
 * XREFs of ?OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180506940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18050697C (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 */

__int64 __fastcall XamlLauncherState::OnStartFailedToGetForeground(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int ForegroundImpl; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ForegroundImpl = XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
  v4 = ForegroundImpl;
  if ( ForegroundImpl < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x834,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)ForegroundImpl);
  return v4;
}
