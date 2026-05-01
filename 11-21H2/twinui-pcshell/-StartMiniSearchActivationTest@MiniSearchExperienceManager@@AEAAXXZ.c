/*
 * XREFs of ?StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A38B8
 * Callers:
 *     ?Show@MiniSearchExperienceManager@@AEAAJ_N@Z @ 0x1801A8090 (-Show@MiniSearchExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A163C (-CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94 (-ensure_data@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

void __fastcall MiniSearchExperienceManager::StartMiniSearchActivationTest(struct _TP_TIMER **this)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v8; // r9
  struct _TP_TIMER *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v1 = this + 32;
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 32) )
  {
    v3 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data(v1);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v10,
      v3);
    v4 = v10;
    tip::details::test_common_data<0>::begin_update(v10 + 8);
    v5 = v4 + 159;
    if ( !v4 )
      v5 = 15LL;
    *(_BYTE *)v5 = 1;
    if ( v4 )
    {
      tip::details::test_common_data<0>::end_update(v4 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v10);
    }
    if ( *((_QWORD *)&v10 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v10 + 1));
    MiniSearchExperienceManager::CompleteMiniSearchActivationTest(this);
  }
  if ( *v1 && tip::details::test_common_data<0>::has_ever_started(*v1 + 8LL) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(v1);
  v6 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data(v1);
  tip::details::test_common_data<0>::start(*v6 + 8LL, &v10);
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_0027b1c56f71c3e4933d43604765ffa8_::_lambda_invoker_cdecl_,
                      this,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 31,
    ThreadpoolTimer);
  v9 = this[31];
  if ( !v9 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x4D9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      v8);
  SetThreadpoolTimer(v9, &pftDueTime, 0, 0);
}
