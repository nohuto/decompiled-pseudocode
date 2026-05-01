/*
 * XREFs of ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FA08
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$emplace@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@?$optional@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAAAEAV?$test_watcher@U_tip_SearchHideTest@@@tip@@$$QEAV23@@Z @ 0x18019A2F0 (--$emplace@V-$test_watcher@U_tip_SearchHideTest@@@tip@@@-$optional@V-$test_watcher@U_tip_SearchH.c)
 *     ??1?$_Optional_destruct_base@V?$test_watcher@U_tip_SearchHideTest@@@tip@@$0A@@std@@QEAA@XZ @ 0x18019BBB4 (--1-$_Optional_destruct_base@V-$test_watcher@U_tip_SearchHideTest@@@tip@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C (--1-$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     ?CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E7CC (-CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A1FF4 (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?watch_errors@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchHideTest@@@2@XZ @ 0x1801A3488 (-watch_errors@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SearchHideTest@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::OnLastResortSuspensionTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v2; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[80]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v10[72]; // [rsp+80h] [rbp-48h] BYREF

  v2 = (struct _TP_TIMER **)((char *)this + 664);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 83);
  if ( v3 && !IsThreadpoolTimerSet(v3) )
  {
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v2,
      0LL);
    v9[64] = 0;
    if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
    {
      tip::tip_test<_tip_SearchHideTest>::watch_errors((char *)this + 760, v10);
      std::optional<tip::test_watcher<_tip_SearchHideTest>>::emplace<tip::test_watcher<_tip_SearchHideTest>>((__int64)v9);
      tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>((__int64)v10);
      tip::tip_test<_tip_SearchHideTest>::data((__int64)this + 760, v8);
      v4 = v8[0];
      v5 = v8[0] + 156;
      v6 = v8[0] == 0;
      if ( !v8[0] )
        v5 = 12LL;
      *(_BYTE *)v5 = 1;
      v7 = v4 + 172;
      if ( v6 )
        v7 = 28LL;
      *(_DWORD *)v7 = *((_DWORD *)this + 160);
      tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v8);
    }
    UndockedSearchAppExperienceManager::SuspendAppInternal(this);
    if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
      UndockedSearchAppExperienceManager::CompleteHideTest(this);
    std::_Optional_destruct_base<tip::test_watcher<_tip_SearchHideTest>,0>::~_Optional_destruct_base<tip::test_watcher<_tip_SearchHideTest>,0>((__int64)v9);
  }
}
