/*
 * XREFs of ??$invoke@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@34@UWindowDraggingEventArgs@7UI@WindowsUdk@4@@impl@winrt@@YA_NAEBU?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@41@AEBUWindowDraggingEventArgs@7UI@WindowsUdk@1@@Z @ 0x180682240
 * Callers:
 *     ??$?RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventArgs@2UI@WindowsUdk@5@@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@AEBUWindowDraggingEventArgs@4UI@WindowsUdk@1@@Z @ 0x180680DB4 (--$-RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventA.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEBA@AEBUSnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@23@AEBUIInspectable@123@@Z @ 0x180683028 (--R-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v8 = 0LL;
    (**v2)(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>,
      &v8);
    v7 = v8;
  }
  else
  {
    v7 = 0LL;
  }
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>::operator()();
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  }
  catch ( ... )
  {
    v4 = *winrt::to_hresult(&v7);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v6,
      v5,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>'::`4'::handler)(
      v4,
      0LL,
      0LL);
    return v4 != -2147417848 && v4 != -2147023174 && v4 != -1996357631;
  }
  return 1;
}
