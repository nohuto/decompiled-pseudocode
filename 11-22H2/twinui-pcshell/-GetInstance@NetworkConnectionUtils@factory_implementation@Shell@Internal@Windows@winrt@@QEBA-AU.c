/*
 * XREFs of ?GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AU13456@XZ @ 0x180283E1C
 * Callers:
 *     ?GetInstance@?$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180283D80 (-GetInstance@-$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x180283E64 (-GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180283FE4 (-RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::GetInstance(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)(a1 + 32);
  winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::RegisterEvents((winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *)((*(_QWORD *)(a1 + 32) - 16LL) & -(__int64)(*(_QWORD *)(a1 + 32) != 0LL)));
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    a2,
    v2);
  return a2;
}
