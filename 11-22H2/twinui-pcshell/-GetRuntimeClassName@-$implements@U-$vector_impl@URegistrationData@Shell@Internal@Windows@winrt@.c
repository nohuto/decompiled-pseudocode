/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@5673@U?$IIterable@URegistrationData@Shell@Internal@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x180706B30
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.Collections.IVector`1<Windows.Internal.Shell.RegistrationData>",
          (winrt::impl *)0x51);
  return a2;
}
