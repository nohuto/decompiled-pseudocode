/*
 * XREFs of ?Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Foundation@Windows@@_N1@Z @ 0x180537588
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444AEBU?$_tlgWrapperByVal@$00@@7@Z @ 0x1805363FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805363FC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180536740 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWr_ea_180536740.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Stop(
        TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *this,
        const struct Windows::Foundation::Rect *a2,
        char a3,
        char a4)
{
  int *v4; // rax
  int v9; // ecx
  int *v10; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v17; // rax
  _DWORD *v18; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[4]; // [rsp+D0h] [rbp-80h] BYREF
  int v23; // [rsp+D4h] [rbp-7Ch] BYREF
  DWORD v24; // [rsp+D8h] [rbp-78h] BYREF
  int v25; // [rsp+DCh] [rbp-74h] BYREF
  int v26; // [rsp+E0h] [rbp-70h] BYREF
  int v27; // [rsp+E4h] [rbp-6Ch] BYREF
  int v28; // [rsp+E8h] [rbp-68h] BYREF
  int v29; // [rsp+ECh] [rbp-64h] BYREF
  int v30; // [rsp+F0h] [rbp-60h] BYREF
  int v31; // [rsp+F4h] [rbp-5Ch] BYREF
  int v32; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v33; // [rsp+100h] [rbp-50h] BYREF
  __int64 v34; // [rsp+108h] [rbp-48h] BYREF
  __int64 v35; // [rsp+110h] [rbp-40h] BYREF
  __int64 v36; // [rsp+118h] [rbp-38h] BYREF
  __int64 v37; // [rsp+120h] [rbp-30h] BYREF
  __int64 v38; // [rsp+128h] [rbp-28h] BYREF
  __int64 v39; // [rsp+130h] [rbp-20h] BYREF
  __int64 v40; // [rsp+138h] [rbp-18h] BYREF
  __int64 v41; // [rsp+140h] [rbp-10h] BYREF
  __int64 v42; // [rsp+148h] [rbp-8h] BYREF
  __int64 v43; // [rsp+170h] [rbp+20h] BYREF

  v4 = (int *)*((_QWORD *)this + 6);
  v9 = v4[19];
  if ( v9 >= 0 || v9 != v4[22] || (v10 = v4 + 20, v4 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
            v16,
            _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    v18 = (_DWORD *)v17[1];
    if ( *v18 > 5u && tlgKeywordOn(v17[1], 0x400000000000LL) )
    {
      v28 = *((_DWORD *)a2 + 3);
      v27 = *((_DWORD *)a2 + 2);
      v26 = *((_DWORD *)a2 + 1);
      v25 = *(_DWORD *)a2;
      LOBYTE(v43) = a4;
      v22[0] = a3;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v24 = CurrentThreadId;
      v23 = *(_DWORD *)(v20 + 76);
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)v18,
        byte_18086533C,
        (const GUID *)(v20 + 8),
        v21,
        (__int64)&v33,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)v22,
        (__int64)&v43);
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
      v29 = *((_DWORD *)a2 + 3);
      v30 = *((_DWORD *)a2 + 2);
      v31 = *((_DWORD *)a2 + 1);
      v32 = *(_DWORD *)a2;
      v34 = *((_QWORD *)v10 + 15);
      v35 = *((_QWORD *)v10 + 14);
      v23 = v10[26];
      v15 = *((_QWORD *)this + 6);
      v36 = *((_QWORD *)v10 + 12);
      v37 = *((_QWORD *)v10 + 11);
      v24 = v10[20];
      v38 = *((_QWORD *)v10 + 9);
      v25 = v10[8];
      v39 = *((_QWORD *)v10 + 3);
      v26 = *v10;
      v40 = *((_QWORD *)v10 + 16);
      v27 = v10[16];
      v41 = *((_QWORD *)v10 + 7);
      v28 = v10[2];
      v42 = 0x1000000LL;
      v33 = 0x1000000LL;
      LOBYTE(v43) = a4;
      v22[0] = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v13,
        (unsigned __int8 *)dword_18086547C,
        (const GUID *)(v15 + 8),
        v14,
        (__int64)&v33,
        (__int64)&v42,
        (__int64)&v28,
        (const wchar_t **)&v41,
        (__int64)&v27,
        (const wchar_t **)&v40,
        (__int64)&v26,
        (const WCHAR **)&v39,
        (__int64)&v25,
        (const wchar_t **)&v38,
        (__int64)&v24,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (__int64)&v23,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)v22,
        (__int64)&v43);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
