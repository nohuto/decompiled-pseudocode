/*
 * XREFs of XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_InitCoro$2 @ 0x1801A9284
 * Callers:
 *     ?WaitForInitializationAsyncHelper@XamlExplorerHostShellComponent@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@XZ @ 0x1801A966C (-WaitForInitializationAsyncHelper@XamlExplorerHostShellComponent@@AEAA-AUIAsyncAction@Foundation.c)
 * Callees:
 *     ??0promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVXamlExplorerHostShellComponent@@@experimental@std@@QEAA@XZ @ 0x18017339C (--0promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVXamlExplorerHostS.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVXamlExplorerHostShellComponent@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x180173424 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_ResumeCoro$1 @ 0x1801A93A0 (XamlExplorerHostShellComponent--WaitForInitializationAsyncHelper$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4)
{
  __int64 v6; // rbx

  *(_QWORD *)(a2 + 481) = a4;
  *(_QWORD *)a2 = XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 96;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type::promise_type(v6);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v6,
    a3);
  *(_BYTE *)(a2 + 480) = 0;
  return XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper__ResumeCoro_1(a2);
}
