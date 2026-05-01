/*
 * XREFs of ?Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXUtagRECT@@0@Z @ 0x1804F7480
 * Callers:
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x1804F4910 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644444444@Z @ 0x1804F284C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1804F284C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1804F2D1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v3; // rax
  int v7; // ecx
  __int64 v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  LONG v20; // [rsp+E0h] [rbp-80h] BYREF
  LONG v21; // [rsp+E4h] [rbp-7Ch] BYREF
  __int64 v22; // [rsp+E8h] [rbp-78h] BYREF
  LONG v23; // [rsp+F0h] [rbp-70h] BYREF
  LONG v24; // [rsp+F4h] [rbp-6Ch] BYREF
  LONG left; // [rsp+F8h] [rbp-68h] BYREF
  LONG top; // [rsp+FCh] [rbp-64h] BYREF
  LONG right; // [rsp+100h] [rbp-60h] BYREF
  LONG bottom; // [rsp+104h] [rbp-5Ch] BYREF
  LONG v29; // [rsp+108h] [rbp-58h] BYREF
  LONG v30; // [rsp+10Ch] [rbp-54h] BYREF
  LONG v31; // [rsp+110h] [rbp-50h] BYREF
  LONG v32; // [rsp+114h] [rbp-4Ch] BYREF
  __int64 v33; // [rsp+118h] [rbp-48h] BYREF
  __int64 v34; // [rsp+120h] [rbp-40h] BYREF
  __int64 v35; // [rsp+128h] [rbp-38h] BYREF
  __int64 v36; // [rsp+130h] [rbp-30h] BYREF
  __int64 v37; // [rsp+138h] [rbp-28h] BYREF
  __int64 v38; // [rsp+140h] [rbp-20h] BYREF
  __int64 v39; // [rsp+148h] [rbp-18h] BYREF
  __int64 v40; // [rsp+150h] [rbp-10h] BYREF
  __int64 v41; // [rsp+158h] [rbp-8h] BYREF
  __int64 v42; // [rsp+160h] [rbp+0h] BYREF

  v3 = *((_QWORD *)this + 6);
  v7 = *(_DWORD *)(v3 + 76);
  if ( v7 >= 0 || v7 != *(_DWORD *)(v3 + 88) || (v8 = v3 + 80, v3 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = wil::details::static_lazy<WindowManagementLogging>::get(
            v14,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v16 = (_DWORD *)v15[1];
    if ( *v16 > 4u && tlgKeywordOn(v15[1], 0x400000000000LL) )
    {
      bottom = a3->bottom;
      right = a3->right;
      top = a3->top;
      left = a3->left;
      v24 = a2->bottom;
      v23 = a2->right;
      v22 = *(_QWORD *)&a2->left;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      v21 = CurrentThreadId;
      v20 = *(_DWORD *)(v18 + 76);
      v33 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v16,
        byte_1806C1BCC,
        (const GUID *)(v18 + 8),
        v19,
        (__int64)&v33,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v22 + 4,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&bottom);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v9,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v10 > 4u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v29 = a3->bottom;
      v30 = a3->right;
      v31 = a3->top;
      v32 = a3->left;
      v20 = a2->bottom;
      v21 = a2->right;
      LODWORD(v22) = a2->top;
      HIDWORD(v22) = a2->left;
      v13 = *((_QWORD *)this + 6);
      v34 = *(_QWORD *)(v8 + 120);
      v35 = *(_QWORD *)(v8 + 112);
      v23 = *(_DWORD *)(v8 + 104);
      v36 = *(_QWORD *)(v8 + 96);
      v37 = *(_QWORD *)(v8 + 88);
      v24 = *(_DWORD *)(v8 + 80);
      v38 = *(_QWORD *)(v8 + 72);
      left = *(_DWORD *)(v8 + 32);
      v39 = *(_QWORD *)(v8 + 24);
      top = *(_DWORD *)v8;
      v40 = *(_QWORD *)(v8 + 128);
      right = *(_DWORD *)(v8 + 64);
      v41 = *(_QWORD *)(v8 + 56);
      bottom = *(_DWORD *)(v8 + 8);
      v42 = 0x1000000LL;
      v33 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned __int8 *)dword_1806C1DBF,
        (const GUID *)(v13 + 8),
        v12,
        (__int64)&v33,
        (__int64)&v42,
        (__int64)&bottom,
        (const wchar_t **)&v41,
        (__int64)&right,
        (const wchar_t **)&v40,
        (__int64)&top,
        (const WCHAR **)&v39,
        (__int64)&left,
        (const wchar_t **)&v38,
        (__int64)&v24,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (__int64)&v23,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v22 + 4,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)((char *)this + 8));
}
