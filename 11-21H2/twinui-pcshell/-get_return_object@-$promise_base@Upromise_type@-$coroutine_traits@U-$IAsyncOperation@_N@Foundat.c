/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x1801CF81C
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_InitCoro$2 @ 0x1801C67B0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_InitCoro$2.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_InitCoro$2 @ 0x1801CA104 (_anonymous_namespace_--RepairWebExperiencePackage$_InitCoro$2.c)
 * Callees:
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
        __int64 a1,
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    a2,
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v4);
  return a2;
}
