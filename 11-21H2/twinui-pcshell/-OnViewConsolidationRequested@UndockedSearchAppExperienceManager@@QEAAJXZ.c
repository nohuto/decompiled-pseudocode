/*
 * XREFs of ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18019FB20
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180092840 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?CancelSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E3BC (-CancelSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$emplace@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@?$optional@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAAAEAV?$test_watcher@U_tip_SearchHideTest@@@tip@@$$QEAV23@@Z @ 0x18019A2F0 (--$emplace@V-$test_watcher@U_tip_SearchHideTest@@@tip@@@-$optional@V-$test_watcher@U_tip_SearchH.c)
 *     ??1?$_Optional_destruct_base@V?$test_watcher@U_tip_SearchHideTest@@@tip@@$0A@@std@@QEAA@XZ @ 0x18019BBB4 (--1-$_Optional_destruct_base@V-$test_watcher@U_tip_SearchHideTest@@@tip@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C (--1-$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     ?CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E640 (-CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E688 (-CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E788 (-CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E7CC (-CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A1FF4 (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?watch_errors@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchHideTest@@@2@XZ @ 0x1801A3488 (-watch_errors@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SearchHideTest@.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::OnViewConsolidationRequested(
        UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  const struct _tlgProvider_t *v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[80]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v14[64]; // [rsp+80h] [rbp-48h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 160) == 10 )
    {
      if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 91) )
      {
        v3 = *tip::tip_test<_tip_SearchFullActivationTest>::data((__int64)this + 728, v12);
        v4 = v3 + 163;
        if ( !v3 )
          v4 = 19LL;
        *(_BYTE *)v4 = 1;
        tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v12);
        UndockedSearchAppExperienceManager::CompleteFullActivationTest((struct _TP_TIMER **)this);
      }
      UndockedSearchAppExperienceManager::CancelSearchAppHideRequestedTimer(this);
      UndockedSearchAppExperienceManager::CancelVisibilityChangedTimeoutTimer(this);
      UndockedSearchAppExperienceManager::CancelLastResortSuspensionTimer(this);
      UndockedSearchAppExperienceManager::SuspendAppInternal(this);
      if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
        UndockedSearchAppExperienceManager::CompleteHideTest(this);
    }
  }
  else
  {
    v5 = SearchAppLauncherLogging::Provider(v2);
    if ( *(_DWORD *)v5 > 5u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (int)v5,
        (int)&unk_1806AC6E1,
        0);
    v13[64] = 0;
    if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
    {
      tip::tip_test<_tip_SearchHideTest>::watch_errors((char *)this + 760, v14);
      std::optional<tip::test_watcher<_tip_SearchHideTest>>::emplace<tip::test_watcher<_tip_SearchHideTest>>((__int64)v13);
      tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>((__int64)v14);
      v6 = *((_DWORD *)this + 160);
      v7 = *tip::tip_test<_tip_SearchHideTest>::data((__int64)this + 760, v12);
      v8 = v7 + 168;
      if ( !v7 )
        v8 = 24LL;
      *(_DWORD *)v8 = v6;
      tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v12);
    }
    if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 91) )
    {
      v9 = *tip::tip_test<_tip_SearchFullActivationTest>::data((__int64)this + 728, v12);
      v10 = v9 + 163;
      if ( !v9 )
        v10 = 19LL;
      *(_BYTE *)v10 = 1;
      tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v12);
      UndockedSearchAppExperienceManager::CompleteFullActivationTest((struct _TP_TIMER **)this);
    }
    if ( *((_DWORD *)this + 160) == 10 )
    {
      UndockedSearchAppExperienceManager::CancelSearchAppHideRequestedTimer(this);
      UndockedSearchAppExperienceManager::CancelLastResortSuspensionTimer(this);
      UndockedSearchAppExperienceManager::SuspendAppInternal(this);
    }
    if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
      UndockedSearchAppExperienceManager::CompleteHideTest(this);
    std::_Optional_destruct_base<tip::test_watcher<_tip_SearchHideTest>,0>::~_Optional_destruct_base<tip::test_watcher<_tip_SearchHideTest>,0>((__int64)v13);
  }
  return 0LL;
}
