/*
 * XREFs of ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x18012E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18004562C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@@std@@XZ @ 0x18004862C (-ensure_data@-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18012E3CC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ??B?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@QEBA_NXZ @ 0x18012E644 (--B-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@QEBA_NXZ.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x18014535C (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180167CC0 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@@std@@XZ @ 0x18044C4E4 (-ensure_data@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV-$shared_pt.c)
 *     ??$StartRunningWithoutCortana@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x18044E360 (--$StartRunningWithoutCortana@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1804524C4 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::OnCortanaLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        int a3)
{
  int v5; // r13d
  char v6; // al
  _QWORD *v7; // r15
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r9
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+40h] [rbp-39h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-31h]
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  std::_Ref_count_base *v30; // [rsp+58h] [rbp-21h]
  __int128 v31; // [rsp+60h] [rbp-19h]
  __int64 v32; // [rsp+70h] [rbp-9h]
  __int128 v33; // [rsp+78h] [rbp-1h]
  __int64 v34; // [rsp+88h] [rbp+Fh]
  char v35; // [rsp+90h] [rbp+17h]
  __int64 v36; // [rsp+E0h] [rbp+67h] BYREF
  int v37; // [rsp+F0h] [rbp+77h] BYREF
  int v38; // [rsp+F8h] [rbp+7Fh] BYREF

  v37 = a3;
  v5 = *((_DWORD *)this + 16);
  LODWORD(v31) = v5;
  *((_QWORD *)&v31 + 1) = this;
  LODWORD(v32) = a3;
  v33 = v31;
  v34 = v32;
  v35 = 1;
  v6 = 0;
  if ( a3 == -2147009295 || a3 == -2144927148 )
    v6 = 1;
  *((_BYTE *)this + 1049) = v6;
  *((_BYTE *)this + 1051) = a3 < 0;
  v7 = (_QWORD *)((char *)this + 944);
  if ( (unsigned __int8)tip::tip_test<_tip_StartMenuInvokeTest>::operator bool((char *)this + 944) )
  {
    v13 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data(v7);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v29,
      v13);
    v14 = v29;
    tip::details::test_common_data<1>::begin_update(v29 + 8);
    v15 = v14 + 164;
    if ( !v14 )
      v15 = 20LL;
    *(_BYTE *)v15 = 1;
    if ( v14 )
    {
      tip::details::test_common_data<1>::end_update(v14 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v29);
    }
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
  }
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this) || *((_BYTE *)this + 1051) )
  {
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    SetExistingEvent(L"ShellSearchReadyEvent");
    StartWindowTelemetry::StartRunningWithoutCortana<long &>(&v37);
    if ( *((_DWORD *)this + 16) == 2 || *((_DWORD *)this + 16) == 19 )
    {
      v16 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data(v7);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v27,
        v16);
      v17 = v27;
      v18 = v27 + 8;
      v36 = v27 + 8;
      tip::details::test_common_data<1>::begin_update(v27 + 8);
      v20 = v17 + 159;
      if ( !v17 )
        v20 = 15LL;
      *(_BYTE *)v20 = 1;
      v21 = v17 + 172;
      if ( !v17 )
        v21 = 28LL;
      *(_DWORD *)v21 = a3;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
        1u,
        3u,
        v19);
      v22 = *((_QWORD *)this + 120);
      if ( v22 && tip::details::test_common_data<1>::is_running(v22 + 8) )
      {
        v23 = (__int64 *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data((char *)this + 960);
        v24 = (volatile signed __int32 *)v23[1];
        if ( v24 )
        {
          _InterlockedIncrement(v24 + 2);
          v24 = (volatile signed __int32 *)v23[1];
          v5 = v31;
          v17 = v27;
        }
        v25 = *v23;
        v29 = v25;
        v30 = (std::_Ref_count_base *)v24;
        tip::details::test_common_data<1>::begin_update(v25 + 8);
        v26 = v25 + 173;
        if ( !v25 )
          v26 = 29LL;
        *(_BYTE *)v26 = 1;
        if ( v25 )
        {
          tip::details::test_common_data<1>::end_update(v25 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(&v29);
          v24 = (volatile signed __int32 *)v30;
        }
        if ( v24 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v24);
        v18 = v36;
      }
      if ( v17 )
      {
        tip::details::test_common_data<1>::end_update(v18);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v27);
      }
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( *((_DWORD *)this + 16) == 6 )
    {
      *((_DWORD *)this + 16) = 0;
    }
  }
  v9 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                   v8,
                   _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
  {
    v37 = a3;
    LODWORD(v36) = *((_DWORD *)this + 16);
    v38 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (int)&unk_1806B56F7,
      0,
      v11,
      (__int64)&v38,
      (__int64)&v36,
      (__int64)&v37);
  }
  return 0LL;
}
