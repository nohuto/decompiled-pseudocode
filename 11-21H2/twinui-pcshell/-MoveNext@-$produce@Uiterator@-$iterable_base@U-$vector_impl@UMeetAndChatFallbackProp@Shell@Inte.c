/*
 * XREFs of ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1805D5440
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803531C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::MoveNext(
        __int64 a1,
        char *a2)
{
  __int64 v3; // rax
  char v4; // r8
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 16;
  v4 = 0;
  if ( !a1 )
    v3 = 32LL;
  v5 = *(_DWORD *)(*(_QWORD *)v3 + 40LL);
  v6 = a1 + 8;
  if ( !a1 )
    v6 = 24LL;
  try
  {
    if ( v5 != *(_DWORD *)v6 )
    {
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000C);
      throw (winrt::hresult_changed_state *)pExceptionObject;
    }
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
        v4 = 1;
    }
    *a2 = v4;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v13);
  }
  return result;
}
