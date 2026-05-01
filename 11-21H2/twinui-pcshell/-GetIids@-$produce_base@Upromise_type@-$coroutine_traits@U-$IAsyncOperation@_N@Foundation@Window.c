/*
 * XREFs of ?GetIids@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1801C7FD0
 * Callers:
 *     <none>
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

__int64 __fastcall winrt::impl::produce_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v4; // rax
  unsigned int v5; // ebx

  *a2 = 2;
  v4 = _Platform_CoTaskMemAlloc(0x20uLL);
  *a3 = v4;
  v5 = 0;
  if ( v4 )
    memmove_0(
      v4,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>>::value,
      0x20uLL);
  else
    return (unsigned int)-2147024882;
  return v5;
}
