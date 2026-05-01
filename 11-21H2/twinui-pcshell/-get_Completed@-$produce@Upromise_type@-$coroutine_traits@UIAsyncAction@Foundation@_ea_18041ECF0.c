/*
 * XREFs of ?get_Completed@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVXamlExplorerHostShellComponent@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18041ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 */

__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,XamlExplorerHostShellComponent *>::promise_type,winrt::Windows::Foundation::IAsyncAction>::get_Completed(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 32;
  if ( !a1 )
    v4 = 48LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)v4);
  v5 = a1 + 40;
  if ( !a1 )
    v5 = 56LL;
  v8 = *(_QWORD *)v5;
  v6 = v8;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  ReleaseSRWLockExclusive_0((PSRWLOCK)v4);
  *a2 = v6;
  return 0LL;
}
