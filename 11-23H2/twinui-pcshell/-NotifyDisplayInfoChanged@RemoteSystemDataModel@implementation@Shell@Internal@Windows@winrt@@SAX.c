/*
 * XREFs of ?NotifyDisplayInfoChanged@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@0@Z @ 0x180715F24
 * Callers:
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDisplayInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemDisplayInfoChangedEventArgs@4561@@Z @ 0x1807093E8 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDi.c)
 *     ??$make@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@@winrt@@YA?A_PAEBUhstring@0@0@Z @ 0x18070C3E8 (--$make@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::NotifyDisplayInfoChanged(
        winrt::impl **a1,
        winrt::impl **a2)
{
  char *v4; // rbx
  char *v5; // [rsp+40h] [rbp+18h] BYREF
  char *v6; // [rsp+48h] [rbp+20h] BYREF

  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v5);
  if ( v5 )
    v4 = v5 - 16;
  else
    v4 = 0LL;
  v5 = 0LL;
  v6 = v4;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v5);
  winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs,winrt::hstring const &,winrt::hstring const &>(
    &v5,
    a1,
    a2);
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
    (RTL_SRWLOCK *)v4 + 26,
    (__int64)v4,
    (__int64)&v5);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v4 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref((volatile __int64 **)&v6);
}
