/*
 * XREFs of ?Stop@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1805189D0
 * Callers:
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AFE7C (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@7@Z @ 0x180509F18 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180509F18.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *this,
        char a2,
        char a3)
{
  int *v3; // rax
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  char v17; // [rsp+D0h] [rbp-80h] BYREF
  _BYTE v18[3]; // [rsp+D1h] [rbp-7Fh] BYREF
  int v19; // [rsp+D4h] [rbp-7Ch] BYREF
  DWORD v20; // [rsp+D8h] [rbp-78h] BYREF
  int v21; // [rsp+DCh] [rbp-74h] BYREF
  int v22; // [rsp+E0h] [rbp-70h] BYREF
  int v23; // [rsp+E4h] [rbp-6Ch] BYREF
  int v24; // [rsp+E8h] [rbp-68h] BYREF
  int v25; // [rsp+ECh] [rbp-64h] BYREF
  int v26; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+100h] [rbp-50h] BYREF
  __int64 v29; // [rsp+108h] [rbp-48h] BYREF
  __int64 v30; // [rsp+110h] [rbp-40h] BYREF
  __int64 v31; // [rsp+118h] [rbp-38h] BYREF
  __int64 v32; // [rsp+120h] [rbp-30h] BYREF
  __int64 v33; // [rsp+128h] [rbp-28h] BYREF
  __int64 v34; // [rsp+130h] [rbp-20h] BYREF
  __int64 v35; // [rsp+138h] [rbp-18h] BYREF
  __int64 v36; // [rsp+140h] [rbp-10h] BYREF
  __int64 v37; // [rsp+148h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+150h] [rbp+0h] BYREF
  __int64 *v39; // [rsp+170h] [rbp+20h]
  int v40; // [rsp+178h] [rbp+28h]
  int v41; // [rsp+17Ch] [rbp+2Ch]
  int *v42; // [rsp+180h] [rbp+30h]
  int v43; // [rsp+188h] [rbp+38h]
  int v44; // [rsp+18Ch] [rbp+3Ch]
  DWORD *v45; // [rsp+190h] [rbp+40h]
  int v46; // [rsp+198h] [rbp+48h]
  int v47; // [rsp+19Ch] [rbp+4Ch]
  char *v48; // [rsp+1A0h] [rbp+50h]
  int v49; // [rsp+1A8h] [rbp+58h]
  int v50; // [rsp+1ACh] [rbp+5Ch]
  _BYTE *v51; // [rsp+1B0h] [rbp+60h]
  int v52; // [rsp+1B8h] [rbp+68h]
  int v53; // [rsp+1BCh] [rbp+6Ch]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v13,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v14 > 5u )
    {
      v18[0] = a3;
      v17 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v53 = 0;
      v50 = 0;
      v47 = 0;
      v44 = 0;
      v41 = 0;
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v16 + 76);
      v27 = 0x1000000LL;
      v51 = v18;
      v48 = &v17;
      v45 = &v20;
      v42 = &v19;
      v52 = 1;
      v49 = 1;
      v39 = &v27;
      v46 = 4;
      v43 = 4;
      v40 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v14,
        (unsigned __int8 *)dword_18085D9B3,
        (const GUID *)(v16 + 8),
        0LL,
        7u,
        &v38);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v9,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v10 > 5u )
    {
      v28 = *((_QWORD *)v8 + 6);
      v21 = v8[17];
      v22 = v8[4];
      v29 = *((_QWORD *)v8 + 15);
      v30 = *((_QWORD *)v8 + 14);
      v23 = v8[26];
      v31 = *((_QWORD *)v8 + 12);
      v12 = *((_QWORD *)this + 6);
      v32 = *((_QWORD *)v8 + 11);
      v24 = v8[20];
      v33 = *((_QWORD *)v8 + 9);
      v25 = v8[8];
      v34 = *((_QWORD *)v8 + 3);
      v26 = *v8;
      v35 = *((_QWORD *)v8 + 16);
      v19 = v8[16];
      v36 = *((_QWORD *)v8 + 7);
      v20 = v8[2];
      v37 = 0x1000000LL;
      v27 = 0x1000000LL;
      v17 = a3;
      v18[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)v10,
        (unsigned __int8 *)dword_18085DA4B,
        (const GUID *)(v12 + 8),
        v11,
        (__int64)&v27,
        (__int64)&v37,
        (__int64)&v20,
        (const wchar_t **)&v36,
        (__int64)&v19,
        (const wchar_t **)&v35,
        (__int64)&v26,
        (const WCHAR **)&v34,
        (__int64)&v25,
        (const wchar_t **)&v33,
        (__int64)&v24,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (__int64)&v23,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v22,
        (__int64)&v21,
        (const wchar_t **)&v28,
        (__int64)v18,
        (__int64)&v17);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
