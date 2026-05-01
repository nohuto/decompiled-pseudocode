/*
 * XREFs of ??0promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVXamlExplorerHostShellComponent@@@experimental@std@@QEAA@XZ @ 0x18017339C
 * Callers:
 *     XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_InitCoro$2 @ 0x1801A9284 (XamlExplorerHostShellComponent--WaitForInitializationAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type::promise_type(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(a1 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  __ExceptionPtrCreate((void *)(a1 + 32));
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)a1 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type::`vftable';
  result = a1;
  *(_WORD *)(a1 + 92) = 0;
  return result;
}
