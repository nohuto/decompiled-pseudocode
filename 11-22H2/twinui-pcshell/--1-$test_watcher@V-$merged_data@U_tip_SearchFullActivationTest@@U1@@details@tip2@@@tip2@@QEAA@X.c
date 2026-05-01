/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180466318
 * Callers:
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$0 @ 0x1802B9915 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::ActivateAppAsync_::_1_::dtor$0 @ 0x1802B998A (_UndockedSearchAppExperienceManager--ActivateAppAsync_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::OnViewCreated_::_1_::dtor$0 @ 0x1802C4D08 (_UndockedSearchAppExperienceManager--OnViewCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1800B724C (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 48);
  if ( v2 )
    tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v2);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
