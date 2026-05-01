/*
 * XREFs of ?Dismiss@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805E14A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1805E1934 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::Dismiss(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  const char *v1; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InsertActionToQueue(this, 1LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x29A,
                           (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
                           v1);
  }
  return result;
}
