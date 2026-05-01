/*
 * XREFs of ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046984C
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180038770 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180038A98 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEAV01@@Z @ 0x180038ACC (--4-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEA.c)
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180051EEC (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800863BC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B9DA4 (--B-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1800B9DC8 (--0-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?UndockedSearchExperienceManager_SuspensionTimerExpired@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18046B30C (-UndockedSearchExperienceManager_SuspensionTimerExpired@SearchAppExperienceManagerTelemetry@@SAX.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::OnLastResortSuspensionTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v2; // rbx
  struct _TP_TIMER *v3; // rcx
  _QWORD *v4; // rsi
  volatile signed __int32 **v5; // rbx
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rdx
  void **v9; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-21h] BYREF
  int v11; // [rsp+40h] [rbp-9h]
  LPVOID pv; // [rsp+50h] [rbp+7h]
  _BYTE v13[8]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp+17h] BYREF
  int v15; // [rsp+78h] [rbp+2Fh]
  LPVOID v16; // [rsp+88h] [rbp+3Fh]
  LPVOID v17; // [rsp+B0h] [rbp+67h] BYREF

  v2 = (struct _TP_TIMER **)((char *)this + 768);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 96);
  if ( v3 && !IsThreadpoolTimerSet(v3) )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_SuspensionTimerExpired();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v2,
      0LL);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>((__int64)v13);
    v4 = (_QWORD *)((char *)this + 864);
    if ( tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool((__int64 *)this + 108) )
    {
      v5 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data((volatile signed __int32 **)this + 108);
      v9 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v10,
        (struct wil::details::IFailureCallback *)&v9,
        0LL,
        1);
      v6 = *v5;
      pv = (LPVOID)v6;
      if ( v6 )
        _InterlockedIncrement(v6 + 82);
      tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator=(
        (__int64)v13,
        (__int64)&v9);
      if ( pv )
        tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)pv);
      if ( v11 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
      v7 = *tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data((volatile signed __int32 **)this + 108);
      v17 = (LPVOID)v7;
      if ( v7 )
        _InterlockedIncrement(v7 + 82);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v7 + 2));
      *((_BYTE *)v7 + 268) = 1;
      *((_DWORD *)v7 + 72) = *((_DWORD *)this + 184);
      tip2::details::shared_data<0,0,0>::end_update((__int64)(v7 + 2), v8);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::reset(&v17);
      if ( v17 )
        tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)v17);
    }
    UndockedSearchAppExperienceManager::SuspendAppInternal(this);
    if ( tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool((__int64 *)this + 108) )
    {
      if ( *v4 )
        tip2::details::shared_data<0,0,0>::complete_without_lock(*v4 + 8LL);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::reset((void **)this + 108);
    }
    if ( v16 )
      tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)v16);
    if ( v15 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
  }
}
