/*
 * XREFs of ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x180149DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180394F78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394F78.c)
 *     ?zInternalStop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803CC7EC (-zInternalStop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  int *v1; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  REGHANDLE v9; // rcx
  int *v10; // rbx
  __int64 v11; // rdx
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+C8h] [rbp-80h] BYREF
  int v18; // [rsp+CCh] [rbp-7Ch] BYREF
  DWORD v19; // [rsp+D0h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+E8h] [rbp-60h] BYREF
  int v23; // [rsp+F0h] [rbp-58h]
  WINBOOL v24; // [rsp+F8h] [rbp-50h] BYREF
  int v25; // [rsp+FCh] [rbp-4Ch] BYREF
  int v26; // [rsp+100h] [rbp-48h] BYREF
  int v27; // [rsp+104h] [rbp-44h] BYREF
  int v28; // [rsp+108h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+110h] [rbp-38h] BYREF
  __int64 v30; // [rsp+120h] [rbp-28h] BYREF
  int v31; // [rsp+128h] [rbp-20h]
  __int64 v32; // [rsp+130h] [rbp-18h] BYREF
  __int64 v33; // [rsp+138h] [rbp-10h] BYREF
  __int64 v34; // [rsp+140h] [rbp-8h] BYREF
  __int64 v35; // [rsp+148h] [rbp+0h] BYREF
  __int64 v36; // [rsp+150h] [rbp+8h] BYREF
  __int64 v37; // [rsp+158h] [rbp+10h] BYREF
  __int64 v38; // [rsp+160h] [rbp+18h] BYREF
  __int64 v39; // [rsp+168h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+30h] BYREF
  void *v41; // [rsp+188h] [rbp+40h]
  int v42; // [rsp+190h] [rbp+48h]
  int v43; // [rsp+194h] [rbp+4Ch]
  PSRWLOCK *p_SRWLock; // [rsp+198h] [rbp+50h]
  __int64 v45; // [rsp+1A0h] [rbp+58h]
  int *v46; // [rsp+1A8h] [rbp+60h]
  __int64 v47; // [rsp+1B0h] [rbp+68h]
  DWORD *v48; // [rsp+1B8h] [rbp+70h]
  __int64 v49; // [rsp+1C0h] [rbp+78h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v10 = v1 + 20, v1 == (int *)-80LL) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
    if ( v4 )
    {
      v5 = v4 + 32;
      AcquireSRWLockExclusive(v5);
      SRWLock = 0LL;
      **((_DWORD **)this + 6) = 2;
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
    else
    {
      *(_QWORD *)&EventDescriptor.Id = 0LL;
      **((_DWORD **)this + 6) = 2;
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      v30 = (__int64)&`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DDC8;
      qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v31 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v30, v15, v16);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      v19 = CurrentThreadId;
      v49 = 4LL;
      v47 = 4LL;
      v18 = *(_DWORD *)(v8 + 76);
      v48 = &v19;
      v46 = &v18;
      p_SRWLock = &SRWLock;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      SRWLock = 0LL;
      v45 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v41 = &unk_180846F52;
      UserData.Reserved = 2;
      v9 = *(_QWORD *)(v6 + 32);
      v42 = 79;
      v43 = 1;
      LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &v24,
           &Context)
      && v24 )
    {
      SRWLock = (PSRWLOCK)&`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DDC8;
      qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v23 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&SRWLock, v11, v12);
    }
    v13 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v13 > 5u )
    {
      v32 = *((_QWORD *)v10 + 6);
      v25 = v10[17];
      v26 = v10[4];
      v33 = *((_QWORD *)v10 + 15);
      v34 = *((_QWORD *)v10 + 14);
      v14 = *((_QWORD *)this + 6);
      v27 = v10[26];
      v35 = *((_QWORD *)v10 + 12);
      v36 = *((_QWORD *)v10 + 11);
      v28 = v10[20];
      v37 = *((_QWORD *)v10 + 9);
      LODWORD(v21) = v10[8];
      v38 = *((_QWORD *)v10 + 3);
      v18 = *v10;
      v39 = *((_QWORD *)v10 + 16);
      v19 = v10[16];
      v30 = *((_QWORD *)v10 + 7);
      fPending = v10[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v13,
        (int)&dword_180846DF2,
        v14 + 8,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)&fPending,
        (__int64)&v30,
        (__int64)&v19,
        (__int64)&v39,
        (__int64)&v18,
        (__int64)&v38,
        (__int64)&v21,
        (__int64)&v37,
        (__int64)&v28,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v27,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v32);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 8));
}
