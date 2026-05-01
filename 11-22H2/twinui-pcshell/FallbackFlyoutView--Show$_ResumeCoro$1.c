/*
 * XREFs of FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x180255520
 * Callers:
 *     FallbackFlyoutView::Show$_InitCoro$2 @ 0x1802553D4 (FallbackFlyoutView--Show$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1805E15F8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1806C41EC (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1806C45A8 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1806C45A8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall FallbackFlyoutView::Show__ResumeCoro_1(__int64 a1)
{
  __m128i *v1; // rbx
  _WORD *v2; // rsi
  __m128i v3; // xmm6
  __int64 **v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _WORD *v14; // [rsp+68h] [rbp+10h]

  v1 = (__m128i *)a1;
  v2 = (_WORD *)(a1 + 8);
  v14 = (_WORD *)(a1 + 8);
  LOWORD(v10) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v10 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      try
      {
        v3 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a1 + 73));
        v4 = (__int64 **)FallbackFlyoutView::EnsureExperienceManager(*(_QWORD *)(a1 + 65), a1 + 16);
        v5 = *v4;
        v6 = **v4;
        v1[3] = v3;
        v7 = (*(__int64 (__fastcall **)(__int64 *, __m128i *, _QWORD))(v6 + 48))(v5, v1 + 3, 0LL);
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3A,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
            (const char *)(unsigned int)v7,
            v10);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1[1].m128i_i64);
        v8 = SHRegSetDWORD(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
               L"FallbackShown",
               1u);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3B,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
            (const char *)(unsigned int)v8);
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerPinItemToTaskbarShim,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::unhandled_exception(a1 - 96);
        v1 = (__m128i *)a1;
        v2 = v14;
      }
      v9 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
             &v1[-6],
             &v1[2]);
      v1[1].m128i_i64[1] = v9;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v9) )
      {
LABEL_8:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(&v1[-6]);
        if ( v1->m128i_i16[5] )
          operator delete(&v1[-6]);
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
