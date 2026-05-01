/*
 * XREFs of ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180042054
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180173D00 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180045250 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180046934 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180046C78 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@@std@@XZ @ 0x18004862C (-ensure_data@-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18006952C (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180069A9C (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C5858 (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180167CC0 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180180EF8 (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LauncherCancelledDueToLock@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180450AD4 (-LauncherCancelledDueToLock@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180452488 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnSessionBecameIdle(XamlLauncherState *this)
{
  int v2; // esi
  _QWORD *v3; // rax
  std::_Ref_count_base *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  const struct _tlgProvider_t *v8; // rax
  int v9; // r9d
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+48h] [rbp-B8h]
  char v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  LODWORD(v17[0]) = *((_DWORD *)this + 16);
  v2 = (int)v17[0];
  v17[1] = this;
  v18 = *(_OWORD *)v17;
  v19 = 1;
  *((_BYTE *)this + 1056) = 1;
  if ( v2 <= 0 )
    goto LABEL_18;
  if ( v2 <= 4 )
    goto LABEL_7;
  if ( v2 == 6 )
  {
    StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((char *)this + 624, v20);
    *((_DWORD *)this + 16) = 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    v13 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A9,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v12,
        v14);
    XamlLauncherState::CancelCortanaTelemetryTimeout(this);
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v20,
      v13);
    StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v20);
  }
  else
  {
    if ( v2 != 7 )
    {
      if ( v2 != 15 && (unsigned int)(v2 - 18) > 3 )
        goto LABEL_18;
LABEL_7:
      CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((char *)this + 304, v20);
      CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToLock((CommonStartTelemetry::LauncherInvokeActivity *)v20);
      v3 = (_QWORD *)tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data((char *)this + 944);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v17,
        v3);
      v4 = v17[0];
      tip::details::test_common_data<1>::begin_update((char *)v17[0] + 8);
      v5 = (__int64)v4 + 155;
      if ( !v4 )
        v5 = 11LL;
      *(_BYTE *)v5 = 1;
      if ( v4 )
      {
        tip::details::test_common_data<1>::end_update((char *)v4 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v17);
      }
      if ( v17[1] )
        std::_Ref_count_base::_Decref(v17[1]);
      *((_DWORD *)this + 16) = 0;
      XamlLauncherState::CancelCortanaReadinessCutoff(this);
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x19E,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v6,
          v14);
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x19F,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v7,
          v14);
      XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v20);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v20);
      goto LABEL_18;
    }
    *((_DWORD *)this + 16) = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B2,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v11,
        v14);
  }
LABEL_18:
  v8 = LauncherTelemetryLogging::Provider();
  if ( *(_DWORD *)v8 > 5u && (unsigned __int8)tlgKeywordOn(v8, 0x200000000000LL) )
  {
    v15 = *((_DWORD *)this + 16);
    v16 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_1806B5BAC,
      0,
      v9,
      (__int64)&v16,
      (__int64)&v15);
  }
  return 0LL;
}
