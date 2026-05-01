/*
 * XREFs of ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x18071DAF8
 * Callers:
 *     ?open@?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x1807248E8 (-open@-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1800925D4 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_RemoteSessionActivationTipTest@@QEAA@XZ @ 0x180720160 (--0_tip_RemoteSessionActivationTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  _QWORD *v3; // rdi
  int v5; // esi
  __int64 v6; // rbp
  _QWORD *v7; // r9

  v3 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>::`vftable';
  v5 = *a3;
  v6 = *a2;
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>::c_details);
  _tip_RemoteSessionActivationTipTest::_tip_RemoteSessionActivationTipTest((_tip_RemoteSessionActivationTipTest *)(v3 + 22));
  *v3 = &tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>::`vftable';
  *v7 = v3 + 8;
  tip::details::test_common_data<1>::open_without_lock((__int64)(v3 + 1), v6, v5);
  return a1;
}
