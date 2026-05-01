/*
 * XREFs of ??$emplace@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Z @ 0x1806C7004
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1806C7FF0 (-InsertAt@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vec.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 *     ??$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x1806C6C10 (--$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeet.c)
 */

_QWORD *__fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::emplace<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const &>(
        __int64 *a1,
        _QWORD *a2,
        winrt::Windows::Foundation::IUnknown *a3,
        _QWORD *a4)
{
  winrt::Windows::Foundation::IUnknown *v4; // r15
  winrt::Windows::Foundation::IUnknown *v8; // rcx
  winrt::Windows::Foundation::IUnknown *v9; // rdi
  __int64 v10; // rax
  winrt::Windows::Foundation::IUnknown *v11; // rcx
  _QWORD v13[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (winrt::Windows::Foundation::IUnknown *)a1[1];
  if ( v4 == (winrt::Windows::Foundation::IUnknown *)a1[2] )
  {
    *a2 = std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Emplace_reallocate<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const &>(
            a1,
            (__int64)a3,
            a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      v8 = (winrt::Windows::Foundation::IUnknown *)a1[1];
      *(_QWORD *)v4 = *a4;
      winrt::Windows::Foundation::IUnknown::add_ref(v8);
      a1[1] += 8LL;
    }
    else
    {
      v13[0] = *a4;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v13);
      v9 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 - 8);
      v10 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = 0LL;
      *(_QWORD *)v4 = v10;
      a1[1] += 8LL;
      while ( v9 != a3 )
      {
        v11 = v9;
        v9 = (winrt::Windows::Foundation::IUnknown *)((char *)v9 - 8);
        winrt::Windows::Foundation::IUnknown::operator=(v11, v9);
      }
      winrt::Windows::Foundation::IUnknown::operator=(a3, (winrt::Windows::Foundation::IUnknown *)v13);
      winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'((winrt::Windows::Internal::Shell::RegistrationData *)v13);
    }
    *a2 = a3;
  }
  return a2;
}
