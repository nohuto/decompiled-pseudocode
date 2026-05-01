/*
 * XREFs of ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x180283E64
 * Callers:
 *     ?GetInstance@NetworkConnectionUtils@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180283DFC (-GetInstance@NetworkConnectionUtils@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     ?OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072E000 (-OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTr.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AU13456@XZ @ 0x180283E1C (-GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA-AU.c)
 *     ??$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18073414C (--$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@im.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::GetInstance(
        winrt::Windows::Foundation::IUnknown *a1)
{
  volatile __int64 *v2; // rbx
  winrt::Windows::Foundation::IUnknown *v4; // [rsp+40h] [rbp+8h] BYREF
  volatile __int64 *v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>(&v4);
  if ( v4 )
    v2 = (volatile __int64 *)((char *)v4 - 16);
  else
    v2 = 0LL;
  v4 = 0LL;
  v5 = v2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v4);
  winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::GetInstance((__int64)v2, a1);
  if ( v2 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v5);
  return a1;
}
