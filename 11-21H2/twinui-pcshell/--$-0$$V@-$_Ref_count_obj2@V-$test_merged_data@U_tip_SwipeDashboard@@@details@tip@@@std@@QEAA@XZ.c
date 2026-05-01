/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@@std@@QEAA@XZ @ 0x1805BBC0C
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_SwipeDashboard@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@@std@@XZ @ 0x1805BE364 (-ensure_data@-$tip_test@U_tip_SwipeDashboard@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_t.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwipeDashboard>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwipeDashboard>>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwipeDashboard>>::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 32) = &tip::details::test_merged_data<_tip_SwipeDashboard>::c_details;
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
  *(_QWORD *)(a1 + 16) = &tip::details::test_merged_data<_tip_SwipeDashboard>::`vftable';
  *(_QWORD *)(a1 + 160) = a1 + 48;
  result = a1;
  *(_QWORD *)(a1 + 168) = 0x1000000LL;
  return result;
}
