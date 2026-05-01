/*
 * XREFs of ??0?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18022B8E0
 * Callers:
 *     ?open@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ @ 0x18022BA00 (-open@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ.c)
 *     ?open_and_watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18022BA64 (-open_and_watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800B4B2C (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x1802033A0 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>::`vftable';
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 256) = a1 + 16;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = 1;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2, v4);
  return a1;
}
