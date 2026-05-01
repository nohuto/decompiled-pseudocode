/*
 * XREFs of ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038F478
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800465EC (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@?$optional@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAAAEAV?$test_watcher@U_tip_SearchHideTest@@@tip@@$$QEAV23@@Z @ 0x18019A2F0 (--$emplace@V-$test_watcher@U_tip_SearchHideTest@@@tip@@@-$optional@V-$test_watcher@U_tip_SearchH.c)
 *     ??1?$optional@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAA@XZ @ 0x18019BCB4 (--1-$optional@V-$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAA@XZ.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C (--1-$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_data_control@U_tip_SearchHideTest@@@tip@@QEBAPEAU_tip_SearchHideTest@@XZ @ 0x18019C158 (--C-$test_data_control@U_tip_SearchHideTest@@@tip@@QEBAPEAU_tip_SearchHideTest@@XZ.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     ?watch_errors@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchHideTest@@@2@XZ @ 0x1801A3488 (-watch_errors@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SearchHideTest@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180348A04 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnSearchAppHideRequestedTimer(
        UndockedSearchAppExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  struct _TP_TIMER *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v9[72]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v11; // [rsp+E0h] [rbp+8h] BYREF

  v2 = SearchAppLauncherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
  {
    v11 = *((_DWORD *)this + 160);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_1806AAA2A,
      0LL,
      v3,
      (__int64)&v11);
  }
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 94);
  if ( v4 && !IsThreadpoolTimerSet(v4) )
  {
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 94,
      0LL);
    v8[64] = 0;
    if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
    {
      tip::tip_test<_tip_SearchHideTest>::watch_errors((_QWORD *)this + 95, (__int64)v9);
      std::optional<tip::test_watcher<_tip_SearchHideTest>>::emplace<tip::test_watcher<_tip_SearchHideTest>>((__int64)v8);
      tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>((__int64)v9);
      tip::tip_test<_tip_SearchHideTest>::data((__int64)this + 760, v7);
      v5 = tip::test_data_control<_tip_SearchHideTest>::operator->(v7);
      *(_BYTE *)(v5 + 11) = 1;
      *(_DWORD *)(v5 + 20) = *((_DWORD *)this + 160);
      tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v7);
    }
    if ( *((_DWORD *)this + 160) == 11 )
    {
      v6 = UndockedSearchAppExperienceManager::HideView(this);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCE8,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
    }
    std::optional<tip::test_watcher<_tip_SearchHideTest>>::~optional<tip::test_watcher<_tip_SearchHideTest>>((__int64)v8);
  }
}
