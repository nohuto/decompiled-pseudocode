/*
 * XREFs of ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x180102480
 * Callers:
 *     <none>
 * Callees:
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800FFB24 (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::MoveNext(
        __int64 a1,
        char *a2)
{
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  v5 = 0;
  if ( !a1 )
    v4 = 32LL;
  v6 = a1 + 8;
  if ( !a1 )
    v6 = 24LL;
  try
  {
    winrt::impl::collection_version::iterator_type::check_version(
      (winrt::impl::collection_version::iterator_type *)v6,
      (const struct winrt::impl::collection_version *)(*(_QWORD *)v4 + 40LL));
    v7 = a1 + 24;
    if ( !a1 )
      v7 = 40LL;
    v8 = *(_QWORD *)v7;
    v9 = a1 + 32;
    if ( !a1 )
      v9 = 48LL;
    v10 = *(_QWORD *)v9;
    if ( v8 != *(_QWORD *)v9 )
    {
      *(_QWORD *)v7 = v8 + 8;
      if ( v8 + 8 != v10 )
        v5 = 1;
    }
    *a2 = v5;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v12);
  }
  return result;
}
