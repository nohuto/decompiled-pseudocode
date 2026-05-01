/*
 * XREFs of ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180450C88
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180173D00 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@@std@@XZ @ 0x18004862C (-ensure_data@-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x18012E460 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@@std@@XZ @ 0x18044C4E4 (-ensure_data@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV-$shared_pt.c)
 *     ??$CortanaCancelledDueToTimerCutoff@AEAKAEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAKAEAW4InternalState@XamlLauncherState@@@Z @ 0x18044DF2C (--$CortanaCancelledDueToTimerCutoff@AEAKAEAW4InternalState@XamlLauncherState@@@StartWindowTeleme.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1804524C4 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaCutoffTimerFired(struct _TP_TIMER **this)
{
  __int64 v2; // r9
  int *v3; // r15
  int v4; // r12d
  __int64 *v5; // rdi
  struct _TP_TIMER *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 *v21; // rax
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v30; // [rsp+38h] [rbp-38h]
  __int128 v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+50h] [rbp-20h]
  char v33; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v35; // [rsp+B0h] [rbp+40h] BYREF
  int v36; // [rsp+B8h] [rbp+48h] BYREF

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 129,
    0LL);
  if ( XamlLauncherState::DoesCortanaHaveForeground((XamlLauncherState *)(this + 3)) )
    return 0LL;
  v3 = (int *)(this + 8);
  v4 = *((_DWORD *)this + 16);
  LODWORD(v31) = v4;
  *((_QWORD *)&v31 + 1) = this;
  v32 = v31;
  v33 = 1;
  v35 = *((_DWORD *)this + 18);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
    1u,
    3u,
    v2);
  v5 = (__int64 *)(this + 120);
  v6 = this[120];
  if ( v6 && tip::details::test_common_data<1>::is_running((__int64)v6 + 8) )
    v35 = *((_DWORD *)this + 19);
  StartWindowTelemetry::CortanaCancelledDueToTimerCutoff<unsigned long &,enum XamlLauncherState::InternalState &>(
    &v35,
    (int *)this + 16);
  v7 = (*(__int64 (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)this[11] + 88LL))(this[11]);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC18,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v7);
  if ( *v3 == 1 )
    goto LABEL_28;
  if ( *v3 == 2 )
  {
LABEL_11:
    v9 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data(this + 118);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v29,
      v9);
    v10 = v29;
    tip::details::test_common_data<1>::begin_update(v29 + 8);
    v12 = v10 + 160;
    if ( !v10 )
      v12 = 16LL;
    *(_BYTE *)v12 = 1;
    if ( v10 )
    {
      tip::details::test_common_data<1>::end_update(v10 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v29);
    }
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
      1u,
      3u,
      v11);
    if ( *v5 && tip::details::test_common_data<1>::is_running(*v5 + 8) )
    {
      v13 = tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data(this + 120);
      v14 = (volatile signed __int32 *)v13[1];
      if ( v14 )
      {
        _InterlockedIncrement(v14 + 2);
        v14 = (volatile signed __int32 *)v13[1];
      }
      v15 = *v13;
      v29 = v15;
      v30 = (std::_Ref_count_base *)v14;
      tip::details::test_common_data<1>::begin_update(v15 + 8);
      v16 = v15 + 173;
      if ( !v15 )
        v16 = 29LL;
      *(_BYTE *)v16 = 1;
      if ( v15 )
      {
        tip::details::test_common_data<1>::end_update(v15 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v29);
        v14 = (volatile signed __int32 *)v30;
      }
      if ( v14 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
    }
    XamlLauncherState::TryToCompleteStartShowWithoutCortana((XamlLauncherState *)this);
    goto LABEL_44;
  }
  v8 = (unsigned int)(*v3 - 18);
  if ( *v3 == 18 )
  {
LABEL_28:
    *((_BYTE *)this + 1052) = 1;
    v17 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data(this + 118);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v29,
      v17);
    v18 = v29;
    tip::details::test_common_data<1>::begin_update(v29 + 8);
    v20 = v18 + 160;
    if ( !v18 )
      v20 = 16LL;
    *(_BYTE *)v20 = 1;
    if ( v18 )
    {
      tip::details::test_common_data<1>::end_update(v18 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v29);
    }
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
      1u,
      3u,
      v19);
    v8 = *v5;
    if ( *v5 && tip::details::test_common_data<1>::is_running(v8 + 8) )
    {
      v21 = tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data(this + 120);
      v22 = (volatile signed __int32 *)v21[1];
      if ( v22 )
      {
        _InterlockedIncrement(v22 + 2);
        v22 = (volatile signed __int32 *)v21[1];
      }
      v23 = *v21;
      v29 = v23;
      v30 = (std::_Ref_count_base *)v22;
      tip::details::test_common_data<1>::begin_update(v23 + 8);
      v24 = v23 + 173;
      if ( !v23 )
        v24 = 29LL;
      *(_BYTE *)v24 = 1;
      if ( v23 )
      {
        tip::details::test_common_data<1>::end_update(v23 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v29);
        v22 = (volatile signed __int32 *)v30;
      }
      if ( v22 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v22);
    }
    goto LABEL_44;
  }
  if ( *v3 == 19 )
    goto LABEL_11;
LABEL_44:
  v25 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                    v8,
                    _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v25 > 5u && tlgKeywordOn((__int64)v25, 0x200000000000LL) )
  {
    v35 = *v3;
    v36 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v26,
      byte_1806B567E,
      0LL,
      v27,
      (__int64)&v36,
      (__int64)&v35);
  }
  return 0LL;
}
