/*
 * XREFs of ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIAEAURect@Foundation@Windows@@_N@Z @ 0x18052BC20
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456444444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18051F19C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18051F19C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180520084 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperBy.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *this,
        DWORD a2,
        int a3,
        struct Windows::Foundation::Rect *a4,
        bool a5)
{
  int *v5; // rax
  int v10; // ecx
  int *v11; // rsi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rax
  _DWORD *v19; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+E0h] [rbp-80h] BYREF
  DWORD v24; // [rsp+E4h] [rbp-7Ch] BYREF
  DWORD v25; // [rsp+E8h] [rbp-78h] BYREF
  int v26; // [rsp+ECh] [rbp-74h] BYREF
  int v27; // [rsp+F0h] [rbp-70h] BYREF
  int v28; // [rsp+F4h] [rbp-6Ch] BYREF
  int v29; // [rsp+F8h] [rbp-68h] BYREF
  int v30; // [rsp+FCh] [rbp-64h] BYREF
  int v31; // [rsp+100h] [rbp-60h] BYREF
  int v32; // [rsp+104h] [rbp-5Ch] BYREF
  int v33; // [rsp+108h] [rbp-58h] BYREF
  int v34; // [rsp+10Ch] [rbp-54h] BYREF
  __int64 v35; // [rsp+110h] [rbp-50h] BYREF
  __int64 v36; // [rsp+118h] [rbp-48h] BYREF
  __int64 v37; // [rsp+120h] [rbp-40h] BYREF
  __int64 v38; // [rsp+128h] [rbp-38h] BYREF
  __int64 v39; // [rsp+130h] [rbp-30h] BYREF
  __int64 v40; // [rsp+138h] [rbp-28h] BYREF
  __int64 v41; // [rsp+140h] [rbp-20h] BYREF
  __int64 v42; // [rsp+148h] [rbp-18h] BYREF
  __int64 v43; // [rsp+150h] [rbp-10h] BYREF
  __int64 v44; // [rsp+158h] [rbp-8h] BYREF
  __int64 v45; // [rsp+180h] [rbp+20h] BYREF

  v5 = (int *)*((_QWORD *)this + 6);
  v10 = v5[19];
  if ( v10 >= 0 || v10 != v5[22] || (v11 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v18 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
            v17,
            _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    v19 = (_DWORD *)v18[1];
    if ( *v19 > 5u && tlgKeywordOn(v18[1], 0x400000000000LL) )
    {
      LOBYTE(v45) = a5;
      v30 = *((_DWORD *)a4 + 3);
      v29 = *((_DWORD *)a4 + 2);
      v28 = *((_DWORD *)a4 + 1);
      v27 = *(_DWORD *)a4;
      v26 = a3;
      v25 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v21 = *((_QWORD *)this + 6);
      v24 = CurrentThreadId;
      v23 = *(_DWORD *)(v21 + 76);
      v35 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v19,
        byte_180863AFF,
        (const GUID *)(v21 + 8),
        v22,
        (__int64)&v35,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v45);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v12,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      LOBYTE(v45) = a5;
      v31 = *((_DWORD *)a4 + 3);
      v32 = *((_DWORD *)a4 + 2);
      v33 = *((_DWORD *)a4 + 1);
      v34 = *(_DWORD *)a4;
      v36 = *((_QWORD *)v11 + 15);
      v37 = *((_QWORD *)v11 + 14);
      v16 = *((_QWORD *)this + 6);
      v25 = v11[26];
      v38 = *((_QWORD *)v11 + 12);
      v39 = *((_QWORD *)v11 + 11);
      v26 = v11[20];
      v40 = *((_QWORD *)v11 + 9);
      v27 = v11[8];
      v41 = *((_QWORD *)v11 + 3);
      v28 = *v11;
      v42 = *((_QWORD *)v11 + 16);
      v29 = v11[16];
      v43 = *((_QWORD *)v11 + 7);
      v30 = v11[2];
      v44 = 0x1000000LL;
      v35 = 0x1000000LL;
      v23 = a3;
      v24 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v14,
        (unsigned __int8 *)dword_180863BAA,
        (const GUID *)(v16 + 8),
        v15,
        (__int64)&v35,
        (__int64)&v44,
        (__int64)&v30,
        (const wchar_t **)&v43,
        (__int64)&v29,
        (const wchar_t **)&v42,
        (__int64)&v28,
        (const WCHAR **)&v41,
        (__int64)&v27,
        (const wchar_t **)&v40,
        (__int64)&v26,
        (const wchar_t **)&v39,
        (const WCHAR **)&v38,
        (__int64)&v25,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v45);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
