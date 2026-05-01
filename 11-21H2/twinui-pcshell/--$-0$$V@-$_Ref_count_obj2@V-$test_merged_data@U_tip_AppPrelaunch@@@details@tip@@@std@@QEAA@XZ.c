/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@QEAA@XZ @ 0x18011B3B0
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_AppPrelaunch@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@XZ @ 0x18011B350 (-ensure_data@-$tip_test@U_tip_AppPrelaunch@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_tip.c)
 * Callees:
 *     ??0_tip_AppPrelaunch@@QEAA@XZ @ 0x1805BCA80 (--0_tip_AppPrelaunch@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunch>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunch>>(
        __int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunch>>::`vftable';
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 32) = &tip::details::test_merged_data<_tip_AppPrelaunch>::c_details;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_WORD *)(a1 + 122) = -1;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  _tip_AppPrelaunch::_tip_AppPrelaunch((_tip_AppPrelaunch *)(a1 + 160));
  *v2 = v1 + 4;
  result = v3;
  *v1 = &tip::details::test_merged_data<_tip_AppPrelaunch>::`vftable';
  return result;
}
