/*
 * XREFs of ??$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18024E13C
 * Callers:
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1806A502C (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024C374 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024C374.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E81C (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E850 (--1-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x18069ED24 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync<PinManagerTelemetry::PinManagerRequestPinItem>(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        void **a3,
        void **a4,
        winrt::Windows::Foundation::IUnknown *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        PinManagerTelemetry::PinManagerRequestPinItem *a10,
        __int64 a11,
        __int64 a12)
{
  void *v15; // rax
  char v17; // [rsp+70h] [rbp-90h] BYREF
  char v18; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+88h] [rbp-78h] BYREF
  int v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h]
  void **v22; // [rsp+728h] [rbp+628h]
  void **v23; // [rsp+730h] [rbp+630h]
  winrt::Windows::Foundation::IUnknown *v24; // [rsp+738h] [rbp+638h]
  PinManagerTelemetry::PinManagerRequestPinItem *v25; // [rsp+740h] [rbp+640h]
  __int64 v26; // [rsp+748h] [rbp+648h]
  __int64 v27; // [rsp+750h] [rbp+650h]

  v21 = a1;
  v22 = a3;
  v23 = a4;
  v24 = a5;
  v25 = a10;
  v26 = a11;
  v27 = a12;
  v19 = 28;
  v17 = 0;
  v18 = 1;
  v15 = operator new(0x681uLL);
  v20 = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__InitCoro_2_PinManagerTelemetry::PinManagerRequestPinItem_(
    &v20,
    (__int64)v15 + 112,
    a2,
    (int)a3,
    (__int64)a4,
    (__int64)a5,
    0,
    (int)&v18,
    (int)&v17,
    (int)&v19,
    (__int64)a10,
    a11,
    a12,
    v21);
  winrt::hstring::~hstring(a3);
  winrt::hstring::~hstring(a4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a5);
  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem(a10);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a11);
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a12);
  return a2;
}
