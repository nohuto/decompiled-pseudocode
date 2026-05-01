/*
 * XREFs of ?CleanUpRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x18070F7B8
 * Callers:
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ?CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18070F66C (-CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::CleanUpRemoteSystem(
        const struct winrt::hstring *a1)
{
  volatile __int64 *v2; // rbx
  char *v3; // [rsp+38h] [rbp+10h] BYREF
  volatile __int64 *v4; // [rsp+40h] [rbp+18h] BYREF

  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v3);
  if ( v3 )
    v2 = (volatile __int64 *)(v3 - 16);
  else
    v2 = 0LL;
  v3 = 0LL;
  v4 = v2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v3);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CleanUpRemoteSystem(
    (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)v2,
    a1);
  if ( v2 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v4);
}
