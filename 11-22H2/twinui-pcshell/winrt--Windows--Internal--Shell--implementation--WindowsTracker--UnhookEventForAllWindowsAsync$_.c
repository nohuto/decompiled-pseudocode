/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_InitCoro$2 @ 0x18027CBCC
 * Callers:
 *     ?UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x18027CF14 (-UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18006E100 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     ??0promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@QEAA@XZ @ 0x1801B243C (--0promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@im.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18027CCF0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllW_ea_18027CCF0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4)
{
  __int64 v6; // rbx

  *(_QWORD *)(a2 + 97) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 96;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type::promise_type(v6);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v6,
    a3);
  *(_BYTE *)(a2 + 96) = 0;
  return winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync__ResumeCoro_1(a2);
}
