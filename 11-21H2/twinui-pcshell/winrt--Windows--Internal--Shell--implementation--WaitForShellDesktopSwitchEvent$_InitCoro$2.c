/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2 @ 0x1801CDE68
 * Callers:
 *     ?WaitForShellDesktopSwitchEvent@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@XZ @ 0x1801CE1E8 (-WaitForShellDesktopSwitchEvent@implementation@Shell@Internal@Windows@winrt@@YA-AUIAsyncAction@F.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1801C3F5C (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1801CDF90 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_ResumeCoro$1.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x1801CF84C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Fo_ea_1801CF84C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rbx

  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v5 = (_QWORD *)(a2 - 96);
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64)v5);
  *v5 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v5,
    a3);
  *(_BYTE *)(a2 + 256) = 0;
  return winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent__ResumeCoro_1(a2);
}
