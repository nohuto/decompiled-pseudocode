/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_b67f180e661d1bfa330541344fe0fc11___::Invoke @ 0x1801AAC00
 * Callers:
 *     <none>
 * Callees:
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ?LauncherDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801AB258 (-LauncherDismissRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewRequested.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_b67f180e661d1bfa330541344fe0fc11___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
         (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v8,
         (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v7);
  XamlLauncher::LauncherDismissRequested(v3, &v6, v4);
  return 0LL;
}
