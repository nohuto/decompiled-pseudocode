/*
 * XREFs of ?StopActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@MEAAXXZ @ 0x18014CD50
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ?zInternalStop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18014CEC8 (-zInternalStop@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::StopActivity(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v14; // [rsp+C4h] [rbp-7Ch] BYREF
  unsigned int v15; // [rsp+C8h] [rbp-78h] BYREF
  int v16; // [rsp+CCh] [rbp-74h] BYREF
  int v17; // [rsp+D0h] [rbp-70h] BYREF
  int v18; // [rsp+D4h] [rbp-6Ch] BYREF
  int v19; // [rsp+D8h] [rbp-68h] BYREF
  int v20; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+100h] [rbp-40h] BYREF
  __int64 v25; // [rsp+108h] [rbp-38h] BYREF
  __int64 v26; // [rsp+110h] [rbp-30h] BYREF
  __int64 v27; // [rsp+118h] [rbp-28h] BYREF
  __int64 v28; // [rsp+120h] [rbp-20h] BYREF
  __int64 v29; // [rsp+128h] [rbp-18h] BYREF
  __int64 v30; // [rsp+130h] [rbp-10h] BYREF
  __int64 v31; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v33; // [rsp+150h] [rbp+10h]
  int v34; // [rsp+158h] [rbp+18h]
  int v35; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v36; // [rsp+160h] [rbp+20h]
  int v37; // [rsp+168h] [rbp+28h]
  int v38; // [rsp+16Ch] [rbp+2Ch]
  int *v39; // [rsp+170h] [rbp+30h]
  int v40; // [rsp+178h] [rbp+38h]
  int v41; // [rsp+17Ch] [rbp+3Ch]
  DWORD *v42; // [rsp+180h] [rbp+40h]
  int v43; // [rsp+188h] [rbp+48h]
  int v44; // [rsp+18Ch] [rbp+4Ch]

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v9 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v5 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
           v4,
           _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v44 = 0;
      v41 = 0;
      v38 = 0;
      EventDescriptor.Keyword = 0LL;
      v14 = CurrentThreadId;
      v13 = *(_DWORD *)(v7 + 76);
      v42 = &v14;
      v39 = &v13;
      v36 = &v21;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      v43 = 4;
      v40 = 4;
      v21 = 0x2000000LL;
      v37 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v33 = &unk_1806ABE67;
      UserData.Reserved = 2;
      v8 = *(_QWORD *)(v5 + 32);
      v34 = 102;
      v35 = 1;
      v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v8, &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v11 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                      v10,
                      _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 5u )
    {
      v23 = *(_QWORD *)(v9 + 48);
      v16 = *(_DWORD *)(v9 + 68);
      v17 = *(_DWORD *)(v9 + 16);
      v24 = *(_QWORD *)(v9 + 120);
      v25 = *(_QWORD *)(v9 + 112);
      v12 = *((_QWORD *)this + 6);
      v18 = *(_DWORD *)(v9 + 104);
      v26 = *(_QWORD *)(v9 + 96);
      v27 = *(_QWORD *)(v9 + 88);
      v19 = *(_DWORD *)(v9 + 80);
      v28 = *(_QWORD *)(v9 + 72);
      v20 = *(_DWORD *)(v9 + 32);
      v29 = *(_QWORD *)(v9 + 24);
      v15 = *(_DWORD *)v9;
      v30 = *(_QWORD *)(v9 + 128);
      v13 = *(_DWORD *)(v9 + 64);
      v31 = *(_QWORD *)(v9 + 56);
      v14 = *(_DWORD *)(v9 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v21 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_1806ABECE,
        v12 + 8,
        (__int64)&v21,
        (__int64)&EventDescriptor,
        (__int64)&v14,
        (__int64)&v31,
        (__int64)&v13,
        (__int64)&v30,
        (__int64)&v15,
        (__int64)&v29,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v19,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v18,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v23);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)this + 8));
}
