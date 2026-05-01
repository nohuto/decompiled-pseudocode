/*
 * XREFs of FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1801D4008
 * Callers:
 *     ?Hide@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x1801D4320 (-Hide@FallbackFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x1801CF84C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Fo_ea_1801CF84C.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1801D3DF4 (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows_ea_1801D3DF4.c)
 *     FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D4140 (FallbackFlyoutView--Hide$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FallbackFlyoutView::Hide__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v7; // rbx

  *(_QWORD *)(a2 + 257) = a5;
  *(_QWORD *)(a2 + 265) = a4;
  *(_QWORD *)a2 = FallbackFlyoutView::Hide__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v7 = (_QWORD *)(a2 - 96);
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64)v7);
  *v7 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    (__int64)v7,
    a3);
  *(_BYTE *)(a2 + 256) = 0;
  return FallbackFlyoutView::Hide__ResumeCoro_1(a2);
}
