/*
 * XREFs of ?Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1801B15D8
 * Callers:
 *     ??$StopWithResult@_NAEAU?$atomic@_N@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXJ$$QEA_NAEAU?$atomic@_N@std@@@Z @ 0x1801AF040 (--$StopWithResult@_NAEAU-$atomic@_N@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLog.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001C20 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001C20.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801799E4 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180459B28 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivation::Stop(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivation *this,
        unsigned __int8 a2,
        char a3)
{
  int *v3; // rax
  int v6; // r14d
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  int v18; // edi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  int v21; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v22; // [rsp+B4h] [rbp-7Ch] BYREF
  int v23; // [rsp+B8h] [rbp-78h] BYREF
  int v24; // [rsp+BCh] [rbp-74h] BYREF
  int v25; // [rsp+C0h] [rbp-70h] BYREF
  int v26; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v27; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+100h] [rbp-30h] BYREF
  __int64 v35; // [rsp+108h] [rbp-28h] BYREF
  __int64 v36; // [rsp+110h] [rbp-20h] BYREF
  __int64 v37; // [rsp+140h] [rbp+10h] BYREF
  __int64 v38; // [rsp+158h] [rbp+28h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v6 = a2;
  v7 = v3[19];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v17 = TouchKeyboardExperienceTraceLogging::Provider(v16);
    v18 = (int)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      LOBYTE(v37) = a3;
      LODWORD(v38) = v6;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v20 + 76);
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v18,
        (unsigned int)&unk_1806B88EA,
        v20 + 8,
        0,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v38,
        (__int64)&v37);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v10 = TouchKeyboardExperienceTraceLogging::Provider(v9);
    v13 = (__int64)v10;
    if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v28 = *((_QWORD *)v8 + 15);
      v29 = *((_QWORD *)v8 + 14);
      v15 = *((_QWORD *)this + 6);
      v23 = v8[26];
      v30 = *((_QWORD *)v8 + 12);
      v31 = *((_QWORD *)v8 + 11);
      v24 = v8[20];
      v32 = *((_QWORD *)v8 + 9);
      v25 = v8[8];
      v33 = *((_QWORD *)v8 + 3);
      v26 = *v8;
      v34 = *((_QWORD *)v8 + 16);
      v21 = v8[16];
      v35 = *((_QWORD *)v8 + 7);
      v22 = v8[2];
      v36 = 0x1000000LL;
      v27 = 0x1000000LL;
      LOBYTE(v37) = a3;
      LODWORD(v38) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v14,
        (int)&dword_1806B8479,
        v15 + 8,
        v13,
        (__int64)&v27,
        (__int64)&v36,
        (__int64)&v22,
        (const wchar_t **)&v35,
        (__int64)&v21,
        (const wchar_t **)&v34,
        (__int64)&v26,
        (const WCHAR **)&v33,
        (__int64)&v25,
        (const wchar_t **)&v32,
        (__int64)&v24,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        (__int64)&v23,
        (const wchar_t **)&v29,
        (const WCHAR **)&v28,
        (__int64)&v38,
        (__int64)&v37);
    }
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
    this,
    v11,
    v12,
    v13);
}
