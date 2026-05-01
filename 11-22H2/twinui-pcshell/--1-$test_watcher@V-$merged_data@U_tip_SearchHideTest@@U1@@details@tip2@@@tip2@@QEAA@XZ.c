/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180091F5C
 * Callers:
 *     _UndockedSearchAppExperienceManager::RequestSearchAppToHideInternal_::_1_::dtor$0 @ 0x1802B63C1 (_UndockedSearchAppExperienceManager--RequestSearchAppToHideInternal_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::Hide_::_1_::dtor$3 @ 0x1802BEACF (_UndockedSearchAppExperienceManager--Hide_--_1_--dtor$3.c)
 *     _UndockedSearchAppExperienceManager::HideWithArgs_::_1_::dtor$3 @ 0x1802BEB59 (_UndockedSearchAppExperienceManager--HideWithArgs_--_1_--dtor$3.c)
 *     _UndockedSearchAppExperienceManager::OnLastResortSuspensionTimer_::_1_::dtor$0 @ 0x1804699E2 (_UndockedSearchAppExperienceManager--OnLastResortSuspensionTimer_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 48);
  if ( v2 )
    tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release(v2);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
