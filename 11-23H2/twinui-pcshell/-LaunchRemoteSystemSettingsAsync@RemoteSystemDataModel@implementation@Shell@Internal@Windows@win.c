/*
 * XREFs of ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180715790
 * Callers:
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x180721FD8 (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807155FC (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 */

char *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::LaunchRemoteSystemSettingsAsync(
        char *a1,
        __int64 *a2)
{
  volatile __int64 *v4; // rbx
  char *v6; // [rsp+40h] [rbp+8h] BYREF
  volatile __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v6);
  if ( v6 )
    v4 = (volatile __int64 *)(v6 - 16);
  else
    v4 = 0LL;
  v6 = 0LL;
  v7 = v4;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchRemoteSystemSettingsAsync(
    (__int64)v4,
    (__int64)a1,
    a2);
  if ( v4 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v7);
  return a1;
}
