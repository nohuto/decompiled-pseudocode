/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_InitCoro$2 @ 0x180250D4C
 * Callers:
 *     ?PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180251250 (-PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_a.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0_parameters_@?4??PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z@QEAA@PEAU234567@01$$QEAVPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@$$QEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@$$QEAV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18024F590 (--0_parameters_@-4--PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@w.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1 @ 0x180250E90 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__InitCoro_2(
        _DWORD *a1,
        _DWORD *a2,
        _BYTE *a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  `winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync'::`5'::_parameters_::_parameters_(
    (__int64)a2 + 602,
    a9,
    a4,
    *a5,
    a6,
    a7);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__ResumeCoro_1;
  a2[2] = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *((_BYTE *)a2 + 601) = 0;
  return winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__ResumeCoro_1(a2);
}
