/*
 * XREFs of ?get@?$runtime_class_name@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1806A98C4
 * Callers:
 *     winrt::implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::GetRuntimeClassName @ 0x1806A2470 (winrt--implements_std--experimental--coroutine_traits_winrt--Windows--Foundation--I_ea_1806A2470.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName @ 0x1806A3D14 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_1806A3D14.c)
 *     ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x1806AD760 (-GetRuntimeClassName@-$implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IRefere.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1806ADEA4 (-NonDelegatingGetRuntimeClassName@-$root_implements@Upromise_type@-$coroutine_trait_ea_1806ADEA4.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::get(
        struct winrt::impl::hstring_header **a1)
{
  *a1 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.IReference`1<Boolean>>",
          (winrt::impl *)0x4E);
  return a1;
}
