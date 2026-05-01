/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_a8ca138aaba118cea10a4636885b9ac9___::Invoke @ 0x1801AAC70
 * Callers:
 *     <none>
 * Callees:
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ?LauncherShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801AB9E8 (-LauncherShowRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEventA.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_a8ca138aaba118cea10a4636885b9ac9___::Invoke(
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
  XamlLauncher::LauncherShowRequested(v3, &v6, v4);
  return 0LL;
}
