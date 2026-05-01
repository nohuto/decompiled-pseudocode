/*
 * XREFs of ??0?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18008D448
 * Callers:
 *     ?open@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x18008D19C (-open@-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1800925D4 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>::test_merged_data<_tip_RecoverRemoteSessionTipTest>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 8,
    a1,
    &tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>::c_details);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_WORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 7LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 240) = 7LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_WORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_BYTE *)(a1 + 280) = 1;
  *(_QWORD *)a1 = &tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>::`vftable';
  *(_QWORD *)(a1 + 176) = a1 + 64;
  tip::details::test_common_data<1>::open_without_lock(a1 + 8, a2, a3);
  return a1;
}
