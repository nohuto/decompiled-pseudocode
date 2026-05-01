/*
 * XREFs of ?PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180251250
 * Callers:
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_InitCoro$2 @ 0x180250D4C (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_InitCoro.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E81C (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E850 (--1-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECF8 (--1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        int a4,
        PinManagerTelemetry::PinManagerPinItemToTaskbarShim *a5,
        __int64 *a6,
        __int64 a7)
{
  _DWORD *v10; // rax
  int v12; // [rsp+50h] [rbp-468h] BYREF
  _DWORD v13[256]; // [rsp+58h] [rbp-460h] BYREF
  PinManagerTelemetry::PinManagerPinItemToTaskbarShim *v14; // [rsp+458h] [rbp-60h]
  __int64 *v15; // [rsp+460h] [rbp-58h]
  __int64 v16; // [rsp+468h] [rbp-50h]

  v12 = a4;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  v10 = operator new(0x3F2uLL);
  v13[0] = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__InitCoro_2(
    v13,
    v10,
    a2,
    a3,
    &v12,
    (__int64)a5,
    a6,
    a7,
    a1);
  PinManagerTelemetry::PinManagerPinItemToTaskbarShim::~PinManagerPinItemToTaskbarShim(a5);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a6);
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a7);
  return a2;
}
