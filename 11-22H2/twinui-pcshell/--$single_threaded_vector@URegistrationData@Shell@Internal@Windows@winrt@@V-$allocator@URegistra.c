/*
 * XREFs of ??$single_threaded_vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@winrt@@YA?AU?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1800DB3E0
 * Callers:
 *     _dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__ @ 0x18000A950 (_dynamic_initializer_for__winrt--Windows--Internal--Shell--implementation--RemoteSystemProvider-.c)
 * Callees:
 *     ??$make@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@winrt@@YA?A_P$$QEAV?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1800DB404 (--$make@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@URegistrationDa.c)
 */

__int64 *winrt::single_threaded_vector<winrt::Windows::Internal::Shell::RegistrationData,std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>()
{
  winrt::make<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::Internal::Shell::RegistrationData>>();
  return &winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData;
}
