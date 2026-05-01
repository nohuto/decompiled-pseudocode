/*
 * XREFs of ?get_Size@?$produce@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x180550DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r9

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  *a2 = (__int64)(*(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38) - *(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x30)) >> 3;
  return 0LL;
}
