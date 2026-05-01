/*
 * XREFs of ??$make@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@winrt@@YA?A_P$$QEAV?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1800DB404
 * Callers:
 *     ??$single_threaded_vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@winrt@@YA?AU?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1800DB3E0 (--$single_threaded_vector@URegistrationData@Shell@Internal@Windows@winrt@@V-$allocator@URegistra.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall winrt::make<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::Internal::Shell::RegistrationData>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *result; // rax
  _QWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x48uLL);
  v7[2] = &winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>>::`vftable';
  v7[3] = &winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>>::`vftable';
  v7[4] = &winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v7[1] = 1LL;
  *((_DWORD *)v7 + 10) = 0;
  *v7 = &winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>::`vftable';
  v3 = *a2;
  v4 = a2[2];
  v5 = a2[1];
  a2[2] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  v7[6] = v3;
  v7[7] = v5;
  v7[8] = v4;
  *v7 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>>::`vftable';
  result = &winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData;
  winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData = (__int64)(v7 + 2);
  return result;
}
