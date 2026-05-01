/*
 * XREFs of ?Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NK0@Z @ 0x18020BB60
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001C64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001C64.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivation::Stop(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivation *this,
        unsigned __int8 a2,
        int a3,
        char a4)
{
  __int64 v4; // rax
  int v7; // r15d
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  _BYTE v21[4]; // [rsp+C8h] [rbp-80h] BYREF
  int v22; // [rsp+CCh] [rbp-7Ch] BYREF
  DWORD v23; // [rsp+D0h] [rbp-78h] BYREF
  int v24; // [rsp+D4h] [rbp-74h] BYREF
  int v25; // [rsp+D8h] [rbp-70h] BYREF
  int v26; // [rsp+DCh] [rbp-6Ch] BYREF
  int v27; // [rsp+E0h] [rbp-68h] BYREF
  int v28; // [rsp+E4h] [rbp-64h] BYREF
  int v29; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+100h] [rbp-48h] BYREF
  __int64 v33; // [rsp+108h] [rbp-40h] BYREF
  __int64 v34; // [rsp+110h] [rbp-38h] BYREF
  __int64 v35; // [rsp+118h] [rbp-30h] BYREF
  __int64 v36; // [rsp+120h] [rbp-28h] BYREF
  __int64 v37; // [rsp+128h] [rbp-20h] BYREF
  __int64 v38; // [rsp+130h] [rbp-18h] BYREF
  __int64 v39; // [rsp+138h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+148h] [rbp+0h] BYREF
  __int64 *v41; // [rsp+168h] [rbp+20h]
  int v42; // [rsp+170h] [rbp+28h]
  int v43; // [rsp+174h] [rbp+2Ch]
  int *v44; // [rsp+178h] [rbp+30h]
  int v45; // [rsp+180h] [rbp+38h]
  int v46; // [rsp+184h] [rbp+3Ch]
  DWORD *v47; // [rsp+188h] [rbp+40h]
  int v48; // [rsp+190h] [rbp+48h]
  int v49; // [rsp+194h] [rbp+4Ch]
  int *v50; // [rsp+198h] [rbp+50h]
  int v51; // [rsp+1A0h] [rbp+58h]
  int v52; // [rsp+1A4h] [rbp+5Ch]
  int *v53; // [rsp+1A8h] [rbp+60h]
  int v54; // [rsp+1B0h] [rbp+68h]
  int v55; // [rsp+1B4h] [rbp+6Ch]
  _BYTE *v56; // [rsp+1B8h] [rbp+70h]
  int v57; // [rsp+1C0h] [rbp+78h]
  int v58; // [rsp+1C4h] [rbp+7Ch]

  v4 = *((_QWORD *)this + 6);
  v7 = a2;
  v9 = *(_DWORD *)(v4 + 76);
  if ( v9 >= 0 || v9 != *(_DWORD *)(v4 + 88) || (v10 = v4 + 80, v4 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v17 = TouchKeyboardExperienceTraceLogging::Provider(v16);
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v21[0] = a4;
      v25 = a3;
      v24 = v7;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 6);
      v58 = 0;
      v55 = 0;
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v23 = CurrentThreadId;
      v22 = *(_DWORD *)(v20 + 76);
      v30 = 0x1000000LL;
      v56 = v21;
      v53 = &v25;
      v50 = &v24;
      v47 = &v23;
      v44 = &v22;
      v41 = &v30;
      v54 = 4;
      v51 = 4;
      v48 = 4;
      v45 = 4;
      v57 = 1;
      v42 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        v18,
        (unsigned __int8 *)dword_18085FB33,
        (const GUID *)(v20 + 8),
        0LL,
        8u,
        &v40);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v12 = TouchKeyboardExperienceTraceLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v31 = *(_QWORD *)(v10 + 120);
      v32 = *(_QWORD *)(v10 + 112);
      v28 = *(_DWORD *)(v10 + 104);
      v15 = *((_QWORD *)this + 6);
      v33 = *(_QWORD *)(v10 + 96);
      v34 = *(_QWORD *)(v10 + 88);
      v29 = *(_DWORD *)(v10 + 80);
      v35 = *(_QWORD *)(v10 + 72);
      v22 = *(_DWORD *)(v10 + 32);
      v36 = *(_QWORD *)(v10 + 24);
      v23 = *(_DWORD *)v10;
      v37 = *(_QWORD *)(v10 + 128);
      v24 = *(_DWORD *)(v10 + 64);
      v38 = *(_QWORD *)(v10 + 56);
      v25 = *(_DWORD *)(v10 + 8);
      v39 = 0x1000000LL;
      v30 = 0x1000000LL;
      v21[0] = a4;
      v26 = a3;
      v27 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v13,
        (int)&dword_18085FBBB,
        v15 + 8,
        v14,
        (__int64)&v30,
        (__int64)&v39,
        (__int64)&v25,
        (const wchar_t **)&v38,
        (__int64)&v24,
        (const wchar_t **)&v37,
        (__int64)&v23,
        (const WCHAR **)&v36,
        (__int64)&v22,
        (const wchar_t **)&v35,
        (__int64)&v29,
        (const wchar_t **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v28,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)v21);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
