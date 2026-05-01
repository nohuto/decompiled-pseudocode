/*
 * XREFs of ?LaunchAsync@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x180711EC4 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807146CC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=1
volatile __int64 *__fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::LaunchAsync(
        __int64 a1,
        volatile __int64 *a2,
        __int64 *a3)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  volatile __int64 *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v7);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchBootToCloudAsync(
    *FactoryImplObj,
    (volatile signed __int32 *)a2,
    a3);
  if ( v7 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v7);
  return a2;
}
