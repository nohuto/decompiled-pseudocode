/*
 * XREFs of ?First@?$produce@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IIterable@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1807060B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$make@Uiterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@PEAU?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@3@@winrt@@YA?A_P$$QEAPEAU?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@0@@Z @ 0x180702A18 (--$make@Uiterator@-$iterable_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>::First(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v4 = a1 + 8;
  if ( !a1 )
    v4 = 40LL;
  if ( v4 )
    v3 = v4 - 40;
  v6 = v3;
  try
  {
    winrt::make<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::RegistrationData,winrt::impl::collection_version>::iterator,winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base> *>(
      &v7,
      &v6);
    *a2 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
