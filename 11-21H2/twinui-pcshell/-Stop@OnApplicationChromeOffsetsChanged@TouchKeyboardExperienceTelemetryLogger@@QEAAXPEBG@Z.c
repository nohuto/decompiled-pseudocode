/*
 * XREFs of ?Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18046645C
 * Callers:
 *     _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::operator() @ 0x1801B0638 (_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_--operator().c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180462080 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456@Z @ 0x180459174 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180459174.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180459BC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *this,
        const unsigned __int16 *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  _DWORD *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  int v20; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  __int64 v33; // [rsp+160h] [rbp+20h] BYREF
  __int64 v34; // [rsp+170h] [rbp+30h] BYREF
  __int64 v35; // [rsp+178h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v11,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 5u )
    {
      v35 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      LODWORD(v33) = CurrentThreadId;
      LODWORD(v34) = *(_DWORD *)(v14 + 76);
      v21 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)v12,
        (unsigned __int8 *)dword_1806B6E6A,
        (const GUID *)(v14 + 8),
        v15,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v33,
        (const WCHAR **)&v35);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                     v7,
                     _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u )
    {
      v23 = *((_QWORD *)v6 + 6);
      LODWORD(v33) = v6[17];
      LODWORD(v34) = v6[4];
      v24 = *((_QWORD *)v6 + 15);
      v25 = *((_QWORD *)v6 + 14);
      LODWORD(v35) = v6[26];
      v26 = *((_QWORD *)v6 + 12);
      v10 = *((_QWORD *)this + 6);
      v27 = *((_QWORD *)v6 + 11);
      v16 = v6[20];
      v28 = *((_QWORD *)v6 + 9);
      v17 = v6[8];
      v29 = *((_QWORD *)v6 + 3);
      v18 = *v6;
      v30 = *((_QWORD *)v6 + 16);
      v19 = v6[16];
      v31 = *((_QWORD *)v6 + 7);
      v20 = v6[2];
      v32 = 0x1000000LL;
      v21 = 0x1000000LL;
      v22 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)v8,
        (unsigned __int8 *)dword_1806B6ED3,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v20,
        (const wchar_t **)&v31,
        (__int64)&v19,
        (const wchar_t **)&v30,
        (__int64)&v18,
        (const WCHAR **)&v29,
        (__int64)&v17,
        (const wchar_t **)&v28,
        (__int64)&v16,
        (const wchar_t **)&v27,
        (const WCHAR **)&v26,
        (__int64)&v35,
        (const wchar_t **)&v25,
        (const WCHAR **)&v24,
        (__int64)&v34,
        (__int64)&v33,
        (const wchar_t **)&v23,
        (const WCHAR **)&v22);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)((char *)this + 8));
}
