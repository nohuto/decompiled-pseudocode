/*
 * XREFs of ??1DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180695260
 * Callers:
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DashboardManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DashboardManager____::_1_::dtor$1 @ 0x1802B4629 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1802B4629.c)
 *     ??1?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180695188 (--1-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 *     ??_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180695558 (--_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180094E18 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180094EB8 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180094EB8.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::~DashboardManager(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 216);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 25);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 23);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 21);
  if ( *((_QWORD *)this + 20) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 160));
  if ( *((_QWORD *)this + 19) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 152));
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 144));
  if ( *((_QWORD *)this + 17) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 136));
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 120));
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this + 24));
}
