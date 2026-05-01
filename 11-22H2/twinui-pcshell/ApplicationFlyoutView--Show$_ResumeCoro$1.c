/*
 * XREFs of ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x180255C40
 * Callers:
 *     ApplicationFlyoutView::Show$_InitCoro$2 @ 0x180255AF4 (ApplicationFlyoutView--Show$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800BB7BC (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CorrelationVector@@QEAA@XZ @ 0x1801B94B8 (--1CorrelationVector@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1805E15F8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x180629E78 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Up_ea_180629E78.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1806C2168 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1806C526C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?SetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAAXAEBURect@Foundation@Windows@winrt@@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@@Z @ 0x1806C5D64 (-SetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAAXAEBURect@Foundation@Windows@winrt@@AEBW4T.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1806C6210 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1806C66DC (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1806C66DC.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall ApplicationFlyoutView::Show__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // rsi
  __int64 v3; // rcx
  TraceLoggingCorrelationVector **v4; // rax
  HWND v5; // r15
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      CorrelationVector::Extend(*(_QWORD *)(a1 + 129), a1 + 16);
      ApplicationFlyoutView::SetRectAndTaskbarLocation(
        *(ApplicationFlyoutView **)(a1 + 97),
        *(const struct winrt::Windows::Foundation::Rect **)(a1 + 105),
        *(const enum winrt::WindowsUdk::UI::Shell::TaskbarLocation **)(a1 + 113));
      *(_BYTE *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 80) = a1 - 96;
      *(_QWORD *)(a1 + 64) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt___JUhstring_4__experimental_std__U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                               a1 - 96,
                               a1 + 32);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_5;
      *v2 = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
        v3,
        a1);
      return;
    case 4:
LABEL_5:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      v4 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)(a1 + 16));
      v5 = ApplicationFlyoutView::EnsureWindow(
             *(ApplicationFlyoutView **)(a1 + 97),
             *(_QWORD *)(a1 + 121),
             (const struct CorrelationVector *)v4);
      ApplicationFlyoutView::TryShowHideWindow(*(ApplicationFlyoutView **)(a1 + 97), v5, 1);
      if ( !SetForegroundWindow(v5) )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)0x80070005LL);
      CorrelationVector::~CorrelationVector((void **)(a1 + 16));
      v6 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
             *(_QWORD *)(a1 + 80),
             a1 + 48);
      *(_QWORD *)(a1 + 40) = v6;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,ApplicationFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v6) )
        goto LABEL_8;
      return;
    case 5:
      CorrelationVector::~CorrelationVector((void **)(a1 + 16));
LABEL_8:
      *(_QWORD *)(a1 + 80) = a1 - 96;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 96));
      break;
    default:
      __debugbreak();
      break;
  }
}
