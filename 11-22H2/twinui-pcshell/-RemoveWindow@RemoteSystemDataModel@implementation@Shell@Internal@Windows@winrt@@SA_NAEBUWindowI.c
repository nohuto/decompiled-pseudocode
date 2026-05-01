/*
 * XREFs of ?RemoveWindow@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_NAEBUWindowId@UI@56@@Z @ 0x180717D50
 * Callers:
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180717B68 (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::RemoveWindow(
        const struct winrt::Windows::UI::WindowId *a1)
{
  volatile __int64 *v2; // rbx
  char v3; // di
  char *v5; // [rsp+38h] [rbp+10h] BYREF
  volatile __int64 *v6; // [rsp+40h] [rbp+18h] BYREF

  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v5);
  if ( v5 )
    v2 = (volatile __int64 *)(v5 - 16);
  else
    v2 = 0LL;
  v5 = 0LL;
  v6 = v2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v5);
  v3 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoveWindow(
         (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)v2,
         a1);
  if ( v2 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v6);
  return v3;
}
