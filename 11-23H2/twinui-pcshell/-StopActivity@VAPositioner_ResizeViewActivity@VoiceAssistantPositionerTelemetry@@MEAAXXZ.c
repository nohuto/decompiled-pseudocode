/*
 * XREFs of ?StopActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@MEAAXXZ @ 0x1805B0E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180394CB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394CB0.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::StopActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _DWORD *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // [rsp+A0h] [rbp-19h] BYREF
  int v16; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v26[4]; // [rsp+F0h] [rbp+37h] BYREF
  __int64 v27; // [rsp+120h] [rbp+67h] BYREF
  __int64 v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v4 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = wil::details::static_lazy<WindowManagementLogging>::get(
            v10,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v12 = (_DWORD *)v11[1];
    if ( *v12 > 5u && tlgKeywordOn(v11[1], 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      LODWORD(v27) = CurrentThreadId;
      LODWORD(v28) = *(_DWORD *)(v14 + 76);
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_180869C81,
        (const GUID *)(v14 + 8),
        0LL,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                     v5,
                     (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v9 = *((_QWORD *)this + 6);
      v17 = *(_QWORD *)(v4 + 120);
      v18 = *(_QWORD *)(v4 + 112);
      LODWORD(v27) = *(_DWORD *)(v4 + 104);
      v19 = *(_QWORD *)(v4 + 96);
      v20 = *(_QWORD *)(v4 + 88);
      LODWORD(v28) = *(_DWORD *)(v4 + 80);
      v21 = *(_QWORD *)(v4 + 72);
      LODWORD(v29) = *(_DWORD *)(v4 + 32);
      v22 = *(_QWORD *)(v4 + 24);
      LODWORD(v30) = *(_DWORD *)v4;
      v23 = *(_QWORD *)(v4 + 128);
      v15 = *(_DWORD *)(v4 + 64);
      v24 = *(_QWORD *)(v4 + 56);
      v16 = *(_DWORD *)(v4 + 8);
      v25 = 0x1000000LL;
      v26[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v7,
        (unsigned __int8 *)dword_180869E05,
        (const GUID *)(v9 + 8),
        v8,
        (__int64)v26,
        (__int64)&v25,
        (__int64)&v16,
        (const wchar_t **)&v24,
        (__int64)&v15,
        (const wchar_t **)&v23,
        (__int64)&v30,
        (const WCHAR **)&v22,
        (__int64)&v29,
        (const wchar_t **)&v21,
        (__int64)&v28,
        (const wchar_t **)&v20,
        (const WCHAR **)&v19,
        (__int64)&v27,
        (const wchar_t **)&v18,
        (const WCHAR **)&v17);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
