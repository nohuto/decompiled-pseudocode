/*
 * XREFs of ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x1806E1B6C
 * Callers:
 *     ??_GSharedDesktopBackgroundVisualHost@@UEAAPEAXI@Z @ 0x1806E1EA0 (--_GSharedDesktopBackgroundVisualHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180044148 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAIXZ @ 0x1800D9A88 (-subtract_reference@-$root_implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unf.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@QEAA@XZ @ 0x1806799B4 (--1-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFrameworkElement@X.c)
 *     ??1?$event_revoker@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1806E19F0 (--1-$event_revoker@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIDesktopV.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::~SharedDesktopBackgroundVisualHost(
        SharedDesktopBackgroundVisualHost *this)
{
  void *v2; // rdx
  HWND v3; // rcx
  char *v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx

  __1__event_revoker_UIDesktopVisualExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDesktopVisualExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 40);
  __1__event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBGA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 38);
  if ( *((_QWORD *)this + 35) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SharedDesktopBackgroundVisualHost *)((char *)this + 280));
  if ( *((_QWORD *)this + 34) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SharedDesktopBackgroundVisualHost *)((char *)this + 272));
  if ( *((_QWORD *)this + 33) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SharedDesktopBackgroundVisualHost *)((char *)this + 264));
  if ( *((_QWORD *)this + 32) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((SharedDesktopBackgroundVisualHost *)((char *)this + 256));
  v3 = (HWND)*((_QWORD *)this + 31);
  if ( v3 )
    DestroyWindow(v3);
  v4 = (char *)*((_QWORD *)this + 29);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = (wil::details *)*((_QWORD *)this + 28);
  if ( v5 )
    wil::details::CloseHandle(v5, v2);
  v6 = (wil::details *)*((_QWORD *)this + 27);
  if ( v6 )
    wil::details::CloseHandle(v6, v2);
  if ( *((_QWORD *)this + 19) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)this + 19);
  if ( *((_QWORD *)this + 16) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)this + 16);
  if ( *((_QWORD *)this + 13) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)this + 13);
  if ( *((_QWORD *)this + 10) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)this + 10);
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)this + 7);
  if ( *((_QWORD *)this + 4) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref((unsigned int **)this + 4);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
