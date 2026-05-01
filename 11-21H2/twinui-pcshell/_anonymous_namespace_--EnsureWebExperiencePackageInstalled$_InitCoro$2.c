/*
 * XREFs of _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_InitCoro$2 @ 0x1801C67B0
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled @ 0x1801C797C (_anonymous_namespace_--EnsureWebExperiencePackageInstalled.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@QEAA@XZ @ 0x1801C44A8 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimen.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x1801CF81C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundat.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall anonymous_namespace_::EnsureWebExperiencePackageInstalled__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx

  *(_QWORD *)a2 = anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v5 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type::promise_type(v5);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    v5,
    a3);
  *(_BYTE *)(a2 + 2016) = 0;
  return anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1(a2);
}
