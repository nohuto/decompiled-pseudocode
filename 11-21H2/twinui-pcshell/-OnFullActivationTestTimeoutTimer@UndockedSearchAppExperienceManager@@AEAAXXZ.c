/*
 * XREFs of ?OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019F980
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnFullActivationTestTimeoutTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rbx
  struct _TP_TIMER *v3; // rcx
  _QWORD *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct _TP_TIMER **)((char *)this + 720);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 90);
  if ( v3 && !IsThreadpoolTimerSet(v3) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  v4 = tip::tip_test<_tip_SearchFullActivationTest>::data((__int64)this + 728, v7);
  v5 = *v4 == 0LL;
  v6 = *v4 + 160LL;
  if ( v5 )
    v6 = 16LL;
  *(_BYTE *)v6 = 1;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v7);
  std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)this + 91);
}
