/*
 * XREFs of ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1804699F4
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180038770 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180038808 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180038A98 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEAV01@@Z @ 0x180038ACC (--4-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEA.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B9DA4 (--B-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1800B9DC8 (--0-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnSearchAppHideRequestedTimer(
        UndockedSearchAppExperienceManager *this)
{
  int *v2; // r14
  _DWORD *v3; // rcx
  int v4; // eax
  struct _TP_TIMER *v5; // rcx
  volatile signed __int32 **v6; // rbx
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // [rsp+30h] [rbp-79h] BYREF
  LPVOID v12; // [rsp+38h] [rbp-71h] BYREF
  void **v13; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v14[24]; // [rsp+48h] [rbp-61h] BYREF
  int v15; // [rsp+60h] [rbp-49h]
  LPVOID pv; // [rsp+70h] [rbp-39h]
  _BYTE v17[8]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp-29h] BYREF
  int v19; // [rsp+98h] [rbp-11h]
  LPVOID v20; // [rsp+A8h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+B0h] [rbp+7h] BYREF
  int *v22; // [rsp+D0h] [rbp+27h]
  int v23; // [rsp+D8h] [rbp+2Fh]
  int v24; // [rsp+DCh] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v2 = (int *)((char *)this + 736);
  v3 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    v4 = *v2;
    v24 = 0;
    v11 = v4;
    v23 = 4;
    v22 = &v11;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_180852437, 0LL, 0LL, 3u, &v21);
  }
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 107);
  if ( v5 && !IsThreadpoolTimerSet(v5) )
  {
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 107,
      0LL);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>((__int64)v17);
    if ( tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool((__int64 *)this + 108) )
    {
      v6 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data((volatile signed __int32 **)this + 108);
      v13 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v14,
        (struct wil::details::IFailureCallback *)&v13,
        0LL,
        1);
      v7 = *v6;
      pv = (LPVOID)v7;
      if ( v7 )
        _InterlockedIncrement(v7 + 82);
      tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator=(
        (__int64)v17,
        (__int64)&v13);
      if ( pv )
        tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)pv);
      if ( v15 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
      v8 = *tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data((volatile signed __int32 **)this + 108);
      v12 = (LPVOID)v8;
      if ( v8 )
        _InterlockedIncrement(v8 + 82);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v8 + 2));
      *((_BYTE *)v8 + 267) = 1;
      *((_DWORD *)v8 + 70) = *((_DWORD *)this + 184);
      tip2::details::shared_data<0,0,0>::end_update((__int64)(v8 + 2), v9);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::reset(&v12);
      if ( v12 )
        tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)v12);
    }
    if ( *v2 == 11 )
    {
      v10 = UndockedSearchAppExperienceManager::HideView(this);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10B2,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
    }
    if ( v20 )
      tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)v20);
    if ( v19 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  }
}
