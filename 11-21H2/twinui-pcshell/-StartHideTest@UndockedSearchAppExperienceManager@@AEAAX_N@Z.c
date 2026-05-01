/*
 * XREFs of ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x1801A1900
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     ?ensure_data@?$tip_test@U_tip_SearchHideTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SearchHideTest@@@details@tip@@@std@@XZ @ 0x1801A2680 (-ensure_data@-$tip_test@U_tip_SearchHideTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_t.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartHideTest(UndockedSearchAppExperienceManager *this, char a2)
{
  int v2; // ebx
  _QWORD *v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  std::_Ref_count_base *v16; // rcx
  _QWORD *v17; // rax
  std::_Ref_count_base *v18[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF

  v2 = *((_DWORD *)this + 160);
  *(_OWORD *)v18 = 0LL;
  v5 = tip::tip_test<_tip_SearchHideTest>::data((__int64)v18, &v19);
  v6 = *v5 == 0LL;
  v7 = *v5 + 160LL;
  if ( v6 )
    v7 = 16LL;
  *(_DWORD *)v7 = v2;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>((__int64 *)&v19);
  v8 = tip::tip_test<_tip_SearchHideTest>::data((__int64)v18, &v19);
  v6 = *v8 == 0LL;
  v9 = *v8 + 152LL;
  if ( v6 )
    v9 = 8LL;
  *(_BYTE *)v9 = a2;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>((__int64 *)&v19);
  v10 = (_QWORD *)tip::tip_test<_tip_SearchHideTest>::ensure_data(v18);
  v11 = (__int64 *)((char *)this + 760);
  v12 = std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
          &v19,
          v10);
  v13 = *v12;
  *v12 = *v11;
  v14 = v11[1];
  *v11 = v13;
  v15 = v12[1];
  v12[1] = v14;
  v16 = (std::_Ref_count_base *)*((_QWORD *)&v19 + 1);
  v11[1] = v15;
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  if ( *v11 && tip::details::test_common_data<0>::has_ever_started(*v11 + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(v11);
  v17 = (_QWORD *)tip::tip_test<_tip_SearchHideTest>::ensure_data(v11);
  tip::details::test_common_data<0>::start(*v17 + 8LL, &v19);
  if ( v18[1] )
    std::_Ref_count_base::_Decref(v18[1]);
}
