/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x1801020A0
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009E3E8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.Collections.IVector`1<Udwm.Transitions.UserResizeVisual>",
          (winrt::impl *)0x4B);
  return a2;
}
