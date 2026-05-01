/*
 * XREFs of ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18012E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180044C00 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@@std@@XZ @ 0x18004862C (-ensure_data@-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x18012E4A0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x18012E740 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@@std@@XZ @ 0x18044C4E4 (-ensure_data@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV-$shared_pt.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x18044E3FC (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ?CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x180450538 (-CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x1804515EC (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ @ 0x18045207C (-StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1804524C4 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // r14d
  char v5; // r13
  XamlLauncherState *v6; // r15
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 *v26; // rax
  volatile signed __int32 *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v31; // [rsp+38h] [rbp-38h]
  __int128 v32; // [rsp+40h] [rbp-30h]
  __int128 v33; // [rsp+50h] [rbp-20h]
  char v34; // [rsp+60h] [rbp-10h]
  int v35; // [rsp+B0h] [rbp+40h] BYREF
  int v36; // [rsp+C8h] [rbp+58h] BYREF

  v4 = *((_DWORD *)this + 16);
  LODWORD(v32) = v4;
  *((_QWORD *)&v32 + 1) = this;
  v33 = v32;
  v34 = 1;
  v5 = 1;
  v6 = (XamlLauncherState *)((char *)this + 24);
  if ( XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
    goto LABEL_5;
  if ( v4 == 1 )
    goto LABEL_23;
  if ( v4 != 2 )
  {
    if ( v4 <= 2 )
      goto LABEL_5;
    if ( v4 <= 4 || v4 == 18 )
    {
LABEL_23:
      v12 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data((_QWORD *)this + 118);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v30,
        v12);
      v13 = v30;
      tip::details::test_common_data<1>::begin_update(v30 + 8);
      v15 = v13 + 158;
      if ( !v13 )
        v15 = 14LL;
      *(_BYTE *)v15 = 1;
      if ( v13 )
      {
        tip::details::test_common_data<1>::end_update(v13 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
      }
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
        1u,
        3u,
        v14);
      v16 = *((_QWORD *)this + 120);
      if ( v16 && tip::details::test_common_data<1>::is_running(v16 + 8) )
      {
        v17 = (__int64 *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data((char *)this + 960);
        v18 = (volatile signed __int32 *)v17[1];
        if ( v18 )
        {
          _InterlockedIncrement(v18 + 2);
          v18 = (volatile signed __int32 *)v17[1];
        }
        v19 = *v17;
        v30 = v19;
        v31 = (std::_Ref_count_base *)v18;
        tip::details::test_common_data<1>::begin_update(v19 + 8);
        v20 = v19 + 173;
        if ( !v19 )
          v20 = 29LL;
        *(_BYTE *)v20 = 1;
        if ( v19 )
        {
          tip::details::test_common_data<1>::end_update(v19 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
          v18 = (volatile signed __int32 *)v31;
        }
        if ( v18 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v18);
      }
      v5 = 0;
      *((_BYTE *)this + 1051) = 1;
      *((_DWORD *)this + 16) = 1;
      v35 = -2147467260;
      StartWindowTelemetry::StartRunningWithoutCortana<long>(&v35);
      goto LABEL_5;
    }
    if ( v4 != 19 )
    {
      if ( v4 <= 19 || v4 > 21 )
        goto LABEL_5;
      goto LABEL_23;
    }
  }
  v21 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data((_QWORD *)this + 118);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v30,
    v21);
  v22 = v30;
  tip::details::test_common_data<1>::begin_update(v30 + 8);
  v24 = v22 + 158;
  if ( !v22 )
    v24 = 14LL;
  *(_BYTE *)v24 = 1;
  if ( v22 )
  {
    tip::details::test_common_data<1>::end_update(v22 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
  }
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
    1u,
    3u,
    v23);
  v25 = *((_QWORD *)this + 120);
  if ( v25 && tip::details::test_common_data<1>::is_running(v25 + 8) )
  {
    v26 = (__int64 *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data((char *)this + 960);
    v27 = (volatile signed __int32 *)v26[1];
    if ( v27 )
    {
      _InterlockedIncrement(v27 + 2);
      v27 = (volatile signed __int32 *)v26[1];
    }
    v28 = *v26;
    v30 = v28;
    v31 = (std::_Ref_count_base *)v27;
    tip::details::test_common_data<1>::begin_update(v28 + 8);
    v29 = v28 + 173;
    if ( !v28 )
      v29 = 29LL;
    *(_BYTE *)v29 = 1;
    if ( v28 )
    {
      tip::details::test_common_data<1>::end_update(v28 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
      v27 = (volatile signed __int32 *)v31;
    }
    if ( v27 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v27);
  }
  XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
LABEL_5:
  if ( XamlLauncherState::IsCortanaVisible(v6) )
  {
    *((_QWORD *)this + 133) = 0LL;
    XamlLauncherState::PostCortanaOrSearchVisibility(this, 0, 0LL);
  }
  if ( v5 )
  {
    if ( XamlLauncherState::IsCortanaVisible(v6) && XamlLauncherState::IsStartVisible(v6) )
    {
      *((_DWORD *)this + 16) = 16;
      if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10)) < 0 )
      {
        XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
        goto LABEL_12;
      }
      goto LABEL_17;
    }
    if ( XamlLauncherState::IsCortanaVisible(v6) )
    {
      StartWindowTelemetry::CortanaViewDestroyedWhileVisible();
    }
    else if ( *((_DWORD *)this + 16) == 16 )
    {
LABEL_17:
      StartWindowTelemetry::StartStayedUpWhenCortanaCrashed();
      goto LABEL_12;
    }
    *((_DWORD *)this + 16) = 0;
  }
LABEL_12:
  v8 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                   v7,
                   _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
  {
    v35 = *((_DWORD *)this + 16);
    v36 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_1806B5901,
      0LL,
      v10,
      (__int64)&v36,
      (__int64)&v35);
  }
  return 0LL;
}
