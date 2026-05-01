/*
 * XREFs of ?get@?$runtime_class_name@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x18041EBF4
 * Callers:
 *     ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x1801C8320 (-GetRuntimeClassName@-$implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1801C9170 (-NonDelegatingGetRuntimeClassName@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncActi.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVXamlExplorerHostShellComponent@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x18041E100 (-NonDelegatingGetRuntimeClassName@-$root_implements@Upromise_type@-$coroutine_trait_ea_18041E100.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800F7820 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     _invalid_parameter_noinfo @ 0x180188E82 (_invalid_parameter_noinfo.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncAction,void>::get(
        struct winrt::impl::shared_hstring_header **a1)
{
  struct winrt::impl::shared_hstring_header *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  struct winrt::impl::shared_hstring_header *v5; // rdi
  _OWORD *v6; // rdx

  v2 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)0x1F);
  v5 = v2;
  v6 = (_OWORD *)((char *)v2 + 28);
  if ( v2 == (struct winrt::impl::shared_hstring_header *)-28LL )
  {
    *(_DWORD *)_o__errno(v3, v6, v4) = 22;
    invalid_parameter_noinfo();
  }
  else
  {
    *v6 = *(_OWORD *)L"Windows.Foundation.IAsyncAction";
    *(_OWORD *)((char *)v2 + 44) = *(_OWORD *)L"Foundation.IAsyncAction";
    *(_OWORD *)((char *)v2 + 60) = *(_OWORD *)L"on.IAsyncAction";
    *(_QWORD *)((char *)v2 + 76) = *(_QWORD *)L"cAction";
    *((_DWORD *)v2 + 21) = *(_DWORD *)L"ion";
    *((_WORD *)v2 + 44) = aWindowsFoundat_34[30];
  }
  *a1 = v5;
  return a1;
}
