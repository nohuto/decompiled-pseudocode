/*
 * XREFs of ?OnMiniSearchActivationTestTimeoutTimer@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A25D8
 * Callers:
 *     ?OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z @ 0x180176320 (-OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94 (-ensure_data@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

void __fastcall MiniSearchExperienceManager::OnMiniSearchActivationTestTimeoutTimer(MiniSearchExperienceManager *this)
{
  struct _TP_TIMER **v1; // rbx
  struct _TP_TIMER *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v1 = (struct _TP_TIMER **)((char *)this + 248);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 31);
  if ( v3 && !IsThreadpoolTimerSet(v3) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  v4 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data((char *)this + 256);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v7,
    v4);
  v5 = v7;
  tip::details::test_common_data<0>::begin_update(v7 + 8);
  v6 = v5 + 152;
  if ( !v5 )
    v6 = 8LL;
  *(_BYTE *)v6 = 1;
  if ( v5 )
  {
    tip::details::test_common_data<0>::end_update(v5 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v7);
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)this + 32);
}
