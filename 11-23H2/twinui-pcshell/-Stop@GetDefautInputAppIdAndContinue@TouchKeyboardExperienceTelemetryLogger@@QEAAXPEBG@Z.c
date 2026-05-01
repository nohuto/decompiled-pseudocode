/*
 * XREFs of ?Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180517B0C
 * Callers:
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator() @ 0x180208118 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--operator().c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AFE7C (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456@Z @ 0x180509BB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180509BB0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x18050A694 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *this,
        const unsigned __int16 *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r9
  int v18; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+C4h] [rbp-7Ch] BYREF
  int v20; // [rsp+C8h] [rbp-78h] BYREF
  int v21; // [rsp+CCh] [rbp-74h] BYREF
  int v22; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+100h] [rbp-40h] BYREF
  __int64 v29; // [rsp+108h] [rbp-38h] BYREF
  __int64 v30; // [rsp+110h] [rbp-30h] BYREF
  __int64 v31; // [rsp+118h] [rbp-28h] BYREF
  __int64 v32; // [rsp+120h] [rbp-20h] BYREF
  __int64 v33; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34; // [rsp+130h] [rbp-10h] BYREF
  __int64 v35; // [rsp+160h] [rbp+20h] BYREF
  __int64 v36; // [rsp+170h] [rbp+30h] BYREF
  __int64 v37; // [rsp+178h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v12,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u )
    {
      v37 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 6);
      LODWORD(v35) = CurrentThreadId;
      v16 = *(_DWORD *)(v15 + 76);
      v23 = 0LL;
      LODWORD(v36) = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)v13,
        (unsigned __int8 *)dword_180860615,
        (const GUID *)(v15 + 8),
        v17,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v35,
        (const WCHAR **)&v37);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                     v7,
                     _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u )
    {
      v25 = *((_QWORD *)v6 + 6);
      LODWORD(v35) = v6[17];
      LODWORD(v36) = v6[4];
      v26 = *((_QWORD *)v6 + 15);
      v27 = *((_QWORD *)v6 + 14);
      LODWORD(v37) = v6[26];
      v10 = *((_QWORD *)this + 6);
      v28 = *((_QWORD *)v6 + 12);
      v11 = *((_QWORD *)v6 + 11);
      v23 = 0LL;
      v29 = v11;
      v18 = v6[20];
      v30 = *((_QWORD *)v6 + 9);
      v19 = v6[8];
      v31 = *((_QWORD *)v6 + 3);
      v20 = *v6;
      v32 = *((_QWORD *)v6 + 16);
      v21 = v6[16];
      v33 = *((_QWORD *)v6 + 7);
      v22 = v6[2];
      v24 = (__int64)a2;
      v34 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)v8,
        (unsigned __int8 *)dword_18086067B,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v22,
        (const wchar_t **)&v33,
        (__int64)&v21,
        (const wchar_t **)&v32,
        (__int64)&v20,
        (const WCHAR **)&v31,
        (__int64)&v19,
        (const wchar_t **)&v30,
        (__int64)&v18,
        (const wchar_t **)&v29,
        (const WCHAR **)&v28,
        (__int64)&v37,
        (const wchar_t **)&v27,
        (const WCHAR **)&v26,
        (__int64)&v36,
        (__int64)&v35,
        (const wchar_t **)&v25,
        (const WCHAR **)&v24);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
