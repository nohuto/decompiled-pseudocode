/*
 * XREFs of ??1?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801B333C
 * Callers:
 *     __dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData___::_1_::dtor$0 @ 0x18000A9A8 (__dynamic_initializer_for__winrt--Windows--Internal--Shell--implementation--RemoteSystemProvider.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1801C61D0 (--$_Destroy_range@V-$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPE.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::RegistrationData>::~vector<winrt::Windows::Internal::Shell::RegistrationData>(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::RegistrationData *v2; // rcx

  v2 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(v2);
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
