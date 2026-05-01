/*
 * XREFs of ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F7204
 * Callers:
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804F3AA0 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x180092220 (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566@Z @ 0x180459824 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180459824.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180459BC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *this,
        struct IApplicationView *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v20; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+100h] [rbp-30h] BYREF
  __int64 v30; // [rsp+108h] [rbp-28h] BYREF
  __int64 v31[6]; // [rsp+110h] [rbp-20h] BYREF
  __int64 v32; // [rsp+150h] [rbp+20h] BYREF
  __int64 v33; // [rsp+160h] [rbp+30h] BYREF
  __int64 CensoredAumidFromView; // [rsp+168h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = wil::details::static_lazy<WindowManagementLogging>::get(
            v12,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v14 = (_DWORD *)v13[1];
    if ( *v14 > 4u && tlgKeywordOn(v13[1], 0x400000000000LL) )
    {
      CensoredAumidFromView = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      LODWORD(v32) = CurrentThreadId;
      LODWORD(v33) = *(_DWORD *)(v16 + 76);
      v21 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)v14,
        (unsigned __int8 *)dword_1806C0D39,
        (const GUID *)(v16 + 8),
        v17,
        (__int64)&v21,
        (__int64)&v33,
        (__int64)&v32,
        (const WCHAR **)&CensoredAumidFromView);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = wil::details::static_lazy<WindowManagementLogging>::get(
           v7,
           _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v9 = (_DWORD *)v8[1];
    if ( *v9 > 4u && tlgKeywordOn(v8[1], 0x400000000000LL) )
    {
      v22 = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
      v10 = *((_QWORD *)this + 6);
      v23 = *((_QWORD *)v6 + 15);
      v24 = *((_QWORD *)v6 + 14);
      LODWORD(v32) = v6[26];
      v25 = *((_QWORD *)v6 + 12);
      v26 = *((_QWORD *)v6 + 11);
      LODWORD(v33) = v6[20];
      v27 = *((_QWORD *)v6 + 9);
      LODWORD(CensoredAumidFromView) = v6[8];
      v28 = *((_QWORD *)v6 + 3);
      v18 = *v6;
      v29 = *((_QWORD *)v6 + 16);
      v19 = v6[16];
      v30 = *((_QWORD *)v6 + 7);
      LODWORD(v20) = v6[2];
      v31[0] = 0x1000000LL;
      v21 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (__int64)v9,
        (unsigned __int8 *)dword_1806C08E6,
        (const GUID *)(v10 + 8),
        v11,
        (__int64)&v21,
        (__int64)v31,
        (__int64)&v20,
        (const wchar_t **)&v30,
        (__int64)&v19,
        (const wchar_t **)&v29,
        (__int64)&v18,
        (const WCHAR **)&v28,
        (__int64)&CensoredAumidFromView,
        (const wchar_t **)&v27,
        (__int64)&v33,
        (const wchar_t **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v32,
        (const wchar_t **)&v24,
        (const WCHAR **)&v23,
        (const WCHAR **)&v22);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *)((char *)this + 8));
}
