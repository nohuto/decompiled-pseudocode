/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a2db3816d0ee8ed84d797564a48f2892___::Invoke @ 0x1803A1D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?LauncherDismissRequested@MiniSearchExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801A79AC (-LauncherDismissRequested@MiniSearchExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShe.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a2db3816d0ee8ed84d797564a48f2892___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 16), (__int64)v7) >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v9 = a3;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    MiniSearchExperienceManager::LauncherDismissRequested(
      v5,
      (__int64)&v8,
      (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  return 0LL;
}
