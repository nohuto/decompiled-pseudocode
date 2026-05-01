/*
 * XREFs of ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x18052ED40
 * Callers:
 *     <none>
 * Callees:
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18052E98C (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::RegistrationData,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Internal::Shell::RegistrationData>>::get_HasCurrent(
        __int64 a1,
        bool *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 24LL;
  try
  {
    winrt::impl::collection_version::iterator_type::check_version(
      (winrt::impl::collection_version::iterator_type *)v5,
      (const struct winrt::impl::collection_version *)(*(_QWORD *)v4 + 40LL));
    v6 = a1 + 32;
    if ( !a1 )
      v6 = 48LL;
    v7 = a1 + 24;
    if ( !a1 )
      v7 = 40LL;
    *a2 = *(_QWORD *)v7 != *(_QWORD *)v6;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
