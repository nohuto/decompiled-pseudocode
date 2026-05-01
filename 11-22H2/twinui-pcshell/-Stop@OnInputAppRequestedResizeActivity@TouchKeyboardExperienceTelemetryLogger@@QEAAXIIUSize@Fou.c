/*
 * XREFs of ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIUSize@Foundation@Windows@@_N1J@Z @ 0x18052B8E4
 * Callers:
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x18051EC84 (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444AEBU?$_tlgWrapperByVal@$00@@74@Z @ 0x18051F4FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18051F4FC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@54@Z @ 0x18052017C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$0.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        int a7)
{
  __int64 v7; // rax
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 *v19; // rax
  _DWORD *v20; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE v24[4]; // [rsp+E0h] [rbp-80h] BYREF
  int v25; // [rsp+E4h] [rbp-7Ch] BYREF
  DWORD v26; // [rsp+E8h] [rbp-78h] BYREF
  int v27; // [rsp+ECh] [rbp-74h] BYREF
  int v28; // [rsp+F0h] [rbp-70h] BYREF
  __int64 v29; // [rsp+F4h] [rbp-6Ch] BYREF
  int v30; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v31; // [rsp+100h] [rbp-60h]
  int v32; // [rsp+108h] [rbp-58h] BYREF
  int v33; // [rsp+10Ch] [rbp-54h] BYREF
  int v34; // [rsp+110h] [rbp-50h] BYREF
  int v35; // [rsp+114h] [rbp-4Ch] BYREF
  __int64 v36; // [rsp+118h] [rbp-48h] BYREF
  __int64 v37; // [rsp+120h] [rbp-40h] BYREF
  __int64 v38; // [rsp+128h] [rbp-38h] BYREF
  __int64 v39; // [rsp+130h] [rbp-30h] BYREF
  __int64 v40; // [rsp+138h] [rbp-28h] BYREF
  __int64 v41; // [rsp+140h] [rbp-20h] BYREF
  __int64 v42; // [rsp+148h] [rbp-18h] BYREF
  __int64 v43; // [rsp+150h] [rbp-10h] BYREF
  __int64 v44; // [rsp+158h] [rbp-8h] BYREF
  __int64 v45; // [rsp+160h] [rbp+0h] BYREF
  __int64 v46; // [rsp+190h] [rbp+30h] BYREF

  v7 = *(_QWORD *)(a1 + 48);
  v31 = a4;
  v11 = *(_DWORD *)(v7 + 76);
  if ( v11 >= 0 || v11 != *(_DWORD *)(v7 + 88) || (v12 = v7 + 80, v7 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v19 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
            v18,
            _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    v20 = (_DWORD *)v19[1];
    if ( *v20 > 5u && tlgKeywordOn(v19[1], 0x400000000000LL) )
    {
      v30 = a7;
      LOBYTE(v46) = a6;
      v24[0] = a5;
      v29 = v31;
      v28 = a3;
      v27 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v22 = *(_QWORD *)(a1 + 48);
      v26 = CurrentThreadId;
      v25 = *(_DWORD *)(v22 + 76);
      v36 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v20,
        byte_1808631AC,
        (const GUID *)(v22 + 8),
        v23,
        (__int64)&v36,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v29 + 4,
        (__int64)v24,
        (__int64)&v46,
        (__int64)&v30);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v14 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v13,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
    {
      v32 = a7;
      LOBYTE(v46) = a6;
      v24[0] = a5;
      v33 = HIDWORD(v31);
      v34 = v31;
      v37 = *(_QWORD *)(v12 + 120);
      v38 = *(_QWORD *)(v12 + 112);
      v17 = *(_QWORD *)(a1 + 48);
      v26 = *(_DWORD *)(v12 + 104);
      v39 = *(_QWORD *)(v12 + 96);
      v40 = *(_QWORD *)(v12 + 88);
      v27 = *(_DWORD *)(v12 + 80);
      v41 = *(_QWORD *)(v12 + 72);
      v28 = *(_DWORD *)(v12 + 32);
      v42 = *(_QWORD *)(v12 + 24);
      LODWORD(v29) = *(_DWORD *)v12;
      v43 = *(_QWORD *)(v12 + 128);
      HIDWORD(v29) = *(_DWORD *)(v12 + 64);
      v44 = *(_QWORD *)(v12 + 56);
      v30 = *(_DWORD *)(v12 + 8);
      v45 = 0x1000000LL;
      v36 = 0x1000000LL;
      v35 = a3;
      v25 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v15,
        (unsigned __int8 *)dword_180863262,
        (const GUID *)(v17 + 8),
        v16,
        (__int64)&v36,
        (__int64)&v45,
        (__int64)&v30,
        (const wchar_t **)&v44,
        (__int64)&v29 + 4,
        (const wchar_t **)&v43,
        (__int64)&v29,
        (const WCHAR **)&v42,
        (__int64)&v28,
        (const wchar_t **)&v41,
        (__int64)&v27,
        (const wchar_t **)&v40,
        (const WCHAR **)&v39,
        (__int64)&v26,
        (const wchar_t **)&v38,
        (const WCHAR **)&v37,
        (__int64)&v25,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)v24,
        (__int64)&v46,
        (__int64)&v32);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
