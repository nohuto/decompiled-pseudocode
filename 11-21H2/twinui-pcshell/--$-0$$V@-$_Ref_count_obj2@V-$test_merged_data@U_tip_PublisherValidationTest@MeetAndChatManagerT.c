/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@@std@@QEAA@XZ @ 0x18011E750
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@@std@@XZ @ 0x18011E704 (-ensure_data@-$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@AEBAAEAV-$sha.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest>>::_Ref_count_obj2<tip::details::test_merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest>>(
        __int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_WinXMenuEnumerationTest>>::`vftable';
  *(_QWORD *)(a1 + 32) = &tip::details::test_merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest>::c_details;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_WORD *)(a1 + 122) = -1;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 16) = &tip::details::test_merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest>::`vftable';
  *(_QWORD *)(a1 + 160) = a1 + 48;
  result = a1;
  *(_DWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  return result;
}
