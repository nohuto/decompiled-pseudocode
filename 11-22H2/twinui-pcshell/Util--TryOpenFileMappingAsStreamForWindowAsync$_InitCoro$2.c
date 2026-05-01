/*
 * XREFs of Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x18027960C
 * Callers:
 *     ?TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@5@@Z @ 0x180279E20 (-TryOpenFileMappingAsStreamForWindowAsync@Util@@YA-AU-$IAsyncOperation@UIRandomAccessStream@Stre.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x180069A58 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundat.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     ??0_parameters_@?8??TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@6@@Z@QEAA@0$$QEAU76@@Z @ 0x18070E1C8 (--0_parameters_@-8--TryOpenFileMappingAsStreamForWindowAsync@Util@@YA-AU-$IAsyncOperation@UIRand.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@QEAA@XZ @ 0x18070E534 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windo.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__InitCoro_2(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v7; // r10

  `Util::TryOpenFileMappingAsStreamForWindowAsync'::`9'::_parameters_::_parameters_(a2 + 321, a4, a5);
  *(_QWORD *)a2 = Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v7 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type::promise_type(a2 - 112);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    a2 - 112,
    a3);
  *(_BYTE *)(a2 + 320) = 0;
  return Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1(a2);
}
