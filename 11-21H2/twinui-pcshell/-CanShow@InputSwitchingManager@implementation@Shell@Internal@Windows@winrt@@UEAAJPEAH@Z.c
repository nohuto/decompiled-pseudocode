/*
 * XREFs of ?CanShow@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAH@Z @ 0x1805E0FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E1028 (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShow(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        int *a2)
{
  int v2; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    LOBYTE(v2) = winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(this);
    result = 0LL;
    *a2 = v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (__int64)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
