/*
 * XREFs of ??1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1800F6DE4
 * Callers:
 *     ??_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z @ 0x1800F4B40 (--_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::~SearchAppActivatedEventArgs(
        volatile signed __int32 **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal((winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal *)(this + 18));
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 17, v2, v3, v4);
  if ( this[15] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 15));
  if ( this[13] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 13));
  if ( this[12] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 12));
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 10, v5, v6, v7);
  winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::~implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>(this);
}
