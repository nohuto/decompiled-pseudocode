/*
 * XREFs of ApplicationFlyoutView::Show$_InitCoro$2 @ 0x180255AF4
 * Callers:
 *     ?Show@ApplicationFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@_JAEBVCorrelationVector@@@Z @ 0x180255E90 (-Show@ApplicationFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4Tas.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18006E100 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x180255C40 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     ??0promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@QEAA@XZ @ 0x1806C4D30 (--0promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyout.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationFlyoutView::Show__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbx

  *(_QWORD *)(a2 + 97) = a8;
  *(_QWORD *)(a2 + 105) = a4;
  *(_QWORD *)(a2 + 113) = a5;
  *(_QWORD *)(a2 + 121) = a6;
  *(_QWORD *)(a2 + 129) = a7;
  *(_QWORD *)a2 = ApplicationFlyoutView::Show__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v10 = a2 - 96;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,ApplicationFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type::promise_type(v10);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v10,
    a3);
  *(_BYTE *)(a2 + 96) = 0;
  return ApplicationFlyoutView::Show__ResumeCoro_1(a2);
}
