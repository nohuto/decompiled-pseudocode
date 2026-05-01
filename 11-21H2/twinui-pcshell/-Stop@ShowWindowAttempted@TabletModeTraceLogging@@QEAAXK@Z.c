/*
 * XREFs of ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x180507CD0
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1801574D0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18000EC20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454@Z @ 0x18030CF08 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18030CF08.c)
 */

void __fastcall TabletModeTraceLogging::ShowWindowAttempted::Stop(
        TabletModeTraceLogging::ShowWindowAttempted *this,
        int a2)
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
  int v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C4h] [rbp-7Ch] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  int v22; // [rsp+D4h] [rbp-6Ch] BYREF
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
  __int64 v33[3]; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34; // [rsp+150h] [rbp+10h] BYREF
  __int64 v35; // [rsp+160h] [rbp+20h] BYREF
  __int64 v36; // [rsp+168h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v12,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u )
    {
      LODWORD(v34) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 6);
      LODWORD(v35) = CurrentThreadId;
      v16 = *(_DWORD *)(v15 + 76);
      v23 = 0LL;
      LODWORD(v36) = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v13,
        (int)&unk_1806C30CA,
        v15 + 8,
        0,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                     v7,
                     _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u )
    {
      v24 = *((_QWORD *)v6 + 6);
      LODWORD(v35) = v6[17];
      LODWORD(v36) = v6[4];
      v25 = *((_QWORD *)v6 + 15);
      v26 = *((_QWORD *)v6 + 14);
      v17 = v6[26];
      v10 = *((_QWORD *)this + 6);
      v27 = *((_QWORD *)v6 + 12);
      v11 = *((_QWORD *)v6 + 11);
      v23 = 0LL;
      v28 = v11;
      v18 = v6[20];
      v29 = *((_QWORD *)v6 + 9);
      v19 = v6[8];
      v30 = *((_QWORD *)v6 + 3);
      v20 = *v6;
      v31 = *((_QWORD *)v6 + 16);
      v21 = v6[16];
      v32 = *((_QWORD *)v6 + 7);
      v22 = v6[2];
      LODWORD(v34) = a2;
      v33[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (unsigned __int8 *)dword_1806C3139,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)&v23,
        (__int64)v33,
        (__int64)&v22,
        (const wchar_t **)&v32,
        (__int64)&v21,
        (const wchar_t **)&v31,
        (__int64)&v20,
        (const WCHAR **)&v30,
        (__int64)&v19,
        (const wchar_t **)&v29,
        (__int64)&v18,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v17,
        (const wchar_t **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v36,
        (__int64)&v35,
        (const wchar_t **)&v24,
        (__int64)&v34);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabletModeTraceLogging::ShowWindowAttempted *)((char *)this + 8));
}
