/*
 * XREFs of ?StopActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18014F020
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::StopActivity(
        SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // eax
  REGHANDLE v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v16; // [rsp+C4h] [rbp-7Ch] BYREF
  unsigned int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D4h] [rbp-6Ch] BYREF
  int v21; // [rsp+D8h] [rbp-68h] BYREF
  int v22; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  __int64 v33; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v35; // [rsp+150h] [rbp+10h]
  int v36; // [rsp+158h] [rbp+18h]
  int v37; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v38; // [rsp+160h] [rbp+20h]
  int v39; // [rsp+168h] [rbp+28h]
  int v40; // [rsp+16Ch] [rbp+2Ch]
  int *v41; // [rsp+170h] [rbp+30h]
  int v42; // [rsp+178h] [rbp+38h]
  int v43; // [rsp+17Ch] [rbp+3Ch]
  DWORD *v44; // [rsp+180h] [rbp+40h]
  int v45; // [rsp+188h] [rbp+48h]
  int v46; // [rsp+18Ch] [rbp+4Ch]

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v10 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
           v4,
           _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v46 = 0;
      v43 = 0;
      v40 = 0;
      EventDescriptor.Keyword = 0LL;
      v16 = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 76);
      v23 = 0LL;
      v15 = v8;
      v44 = &v16;
      v41 = &v15;
      v38 = &v23;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      v45 = 4;
      v42 = 4;
      v39 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v35 = &unk_1806CE27B;
      UserData.Reserved = 2;
      v9 = *(_QWORD *)(v5 + 32);
      v36 = 80;
      v37 = 1;
      v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v11,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 5u )
    {
      v25 = *(_QWORD *)(v10 + 48);
      v18 = *(_DWORD *)(v10 + 68);
      v19 = *(_DWORD *)(v10 + 16);
      v26 = *(_QWORD *)(v10 + 120);
      v27 = *(_QWORD *)(v10 + 112);
      v13 = *((_QWORD *)this + 6);
      v20 = *(_DWORD *)(v10 + 104);
      v14 = *(_QWORD *)(v10 + 96);
      v23 = 0LL;
      v28 = v14;
      v29 = *(_QWORD *)(v10 + 88);
      v21 = *(_DWORD *)(v10 + 80);
      v30 = *(_QWORD *)(v10 + 72);
      v22 = *(_DWORD *)(v10 + 32);
      v31 = *(_QWORD *)(v10 + 24);
      v17 = *(_DWORD *)v10;
      v32 = *(_QWORD *)(v10 + 128);
      v15 = *(_DWORD *)(v10 + 64);
      v33 = *(_QWORD *)(v10 + 56);
      v16 = *(_DWORD *)(v10 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v12,
        (int)&dword_1806CE2CC,
        v13 + 8,
        (__int64)&v23,
        (__int64)&EventDescriptor,
        (__int64)&v16,
        (__int64)&v33,
        (__int64)&v15,
        (__int64)&v32,
        (__int64)&v17,
        (__int64)&v31,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v20,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)((char *)this + 8));
}
