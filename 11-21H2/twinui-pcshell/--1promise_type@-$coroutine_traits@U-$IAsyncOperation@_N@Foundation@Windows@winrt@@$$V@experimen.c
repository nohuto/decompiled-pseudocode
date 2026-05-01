/*
 * XREFs of ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@UEAA@XZ @ 0x1801C47F8
 * Callers:
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_InitCoro$2_::_1_::dtor$1 @ 0x1801C68A5 (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_InitCoro$2_--_1_--dtor$1.c)
 *     __anonymous_namespace_::RepairWebExperiencePackage$_InitCoro$2_::_1_::dtor$1 @ 0x1801CA1F9 (__anonymous_namespace_--RepairWebExperiencePackage$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type::~promise_type(
        __int64 a1)
{
  return winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>(a1);
}
