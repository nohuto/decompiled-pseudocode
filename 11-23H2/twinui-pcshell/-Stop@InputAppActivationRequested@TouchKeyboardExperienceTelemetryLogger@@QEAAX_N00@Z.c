/*
 * XREFs of ?Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N00@Z @ 0x180517D70
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180514850 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x18001CACC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456444@Z @ 0x1805098A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805098A8.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::Stop(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rax
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v17; // rax
  _DWORD *v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  int v21; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v22; // [rsp+CCh] [rbp-7Ch] BYREF
  int v23; // [rsp+D0h] [rbp-78h] BYREF
  int v24; // [rsp+D4h] [rbp-74h] BYREF
  int v25; // [rsp+D8h] [rbp-70h] BYREF
  int v26; // [rsp+DCh] [rbp-6Ch] BYREF
  int v27; // [rsp+E0h] [rbp-68h] BYREF
  int v28; // [rsp+E4h] [rbp-64h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+100h] [rbp-48h] BYREF
  __int64 v33; // [rsp+108h] [rbp-40h] BYREF
  __int64 v34; // [rsp+110h] [rbp-38h] BYREF
  __int64 v35; // [rsp+118h] [rbp-30h] BYREF
  __int64 v36; // [rsp+120h] [rbp-28h] BYREF
  __int64 v37; // [rsp+128h] [rbp-20h] BYREF
  __int64 v38; // [rsp+130h] [rbp-18h] BYREF
  __int64 v39; // [rsp+158h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 6);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = *(_DWORD *)(v4 + 76);
  if ( v9 >= 0 || v9 != *(_DWORD *)(v4 + 88) || (v10 = v4 + 80, v4 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
            v16,
            _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    v18 = (_DWORD *)v17[1];
    if ( *v18 > 5u && tlgKeywordOn(v17[1], 0x400000000000LL) )
    {
      LODWORD(v39) = v6;
      v24 = v7;
      v23 = v8;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v20 + 76);
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v18,
        (int)&unk_18085FAA2,
        v20 + 8,
        0,
        (__int64)&v29,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v39);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v11,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v30 = *(_QWORD *)(v10 + 120);
      v31 = *(_QWORD *)(v10 + 112);
      v27 = *(_DWORD *)(v10 + 104);
      v15 = *((_QWORD *)this + 6);
      v32 = *(_QWORD *)(v10 + 96);
      v33 = *(_QWORD *)(v10 + 88);
      v28 = *(_DWORD *)(v10 + 80);
      v34 = *(_QWORD *)(v10 + 72);
      v21 = *(_DWORD *)(v10 + 32);
      v35 = *(_QWORD *)(v10 + 24);
      v22 = *(_DWORD *)v10;
      v36 = *(_QWORD *)(v10 + 128);
      v23 = *(_DWORD *)(v10 + 64);
      v37 = *(_QWORD *)(v10 + 56);
      v24 = *(_DWORD *)(v10 + 8);
      v38 = 0x1000000LL;
      v29 = 0x1000000LL;
      LODWORD(v39) = v6;
      v25 = v7;
      v26 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (unsigned __int8 *)dword_18086016B,
        (const GUID *)(v15 + 8),
        v14,
        (__int64)&v29,
        (__int64)&v38,
        (__int64)&v24,
        (const wchar_t **)&v37,
        (__int64)&v23,
        (const wchar_t **)&v36,
        (__int64)&v22,
        (const WCHAR **)&v35,
        (__int64)&v21,
        (const wchar_t **)&v34,
        (__int64)&v28,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v27,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v39);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
