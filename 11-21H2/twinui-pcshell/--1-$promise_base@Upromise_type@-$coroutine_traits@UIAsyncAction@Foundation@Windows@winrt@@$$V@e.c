/*
 * XREFs of ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1801C46BC
 * Callers:
 *     ??1promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UEAA@XZ @ 0x1801C4804 (--1promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutVie.c)
 *     ??_E?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAAPEAXI@Z @ 0x1801C5BD0 (--_E-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAV.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x1801CDB70 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1801CDF90 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_ResumeCoro$1.c)
 *     FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D4140 (FallbackFlyoutView--Hide$_ResumeCoro$1.c)
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x1801D44F0 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D5250 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1801D56C0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(
        __int64 a1)
{
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 64));
  if ( *(_QWORD *)(a1 + 56) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 56));
  __ExceptionPtrDestroy((void *)(a1 + 32));
  return winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::~root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>(a1);
}
