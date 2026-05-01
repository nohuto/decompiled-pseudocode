/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1801C9170
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801C8360 (-GetRuntimeClassName@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wi.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$runtime_class_name@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x18041EBF4 (-get@-$runtime_class_name@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhstring@3@X.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::NonDelegatingGetRuntimeClassName(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  try
  {
    winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncAction,void>::get(&v8);
    v3 = v8;
    v8 = 0LL;
    *a2 = v3;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8, v4, v5, v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}
