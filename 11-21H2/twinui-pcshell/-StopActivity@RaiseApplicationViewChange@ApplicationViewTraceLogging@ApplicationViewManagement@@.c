/*
 * XREFs of ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x180127B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 *     ?zInternalStop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180310F88 (-zInternalStop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  int *v2; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r8
  int *v8; // r14
  __int64 v9; // rdx
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v14; // [rsp+C0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+C4h] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+C8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-60h] BYREF
  int v20; // [rsp+E8h] [rbp-58h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-50h] BYREF
  WINBOOL v22; // [rsp+100h] [rbp-40h] BYREF
  int v23; // [rsp+104h] [rbp-3Ch] BYREF
  int v24; // [rsp+108h] [rbp-38h] BYREF
  int v25; // [rsp+10Ch] [rbp-34h] BYREF
  int v26; // [rsp+110h] [rbp-30h] BYREF
  __int64 v27; // [rsp+118h] [rbp-28h] BYREF
  __int64 v28; // [rsp+120h] [rbp-20h] BYREF
  __int64 v29; // [rsp+128h] [rbp-18h] BYREF
  __int64 v30; // [rsp+130h] [rbp-10h] BYREF
  __int64 v31; // [rsp+138h] [rbp-8h] BYREF
  __int64 v32; // [rsp+140h] [rbp+0h] BYREF
  __int64 v33; // [rsp+148h] [rbp+8h] BYREF
  __int64 v34; // [rsp+150h] [rbp+10h] BYREF
  __int64 v35; // [rsp+158h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+20h] BYREF
  void *v37; // [rsp+170h] [rbp+30h]
  int v38; // [rsp+178h] [rbp+38h]
  int v39; // [rsp+17Ch] [rbp+3Ch]
  __int64 *v40; // [rsp+180h] [rbp+40h]
  __int64 v41; // [rsp+188h] [rbp+48h]
  int *v42; // [rsp+190h] [rbp+50h]
  __int64 v43; // [rsp+198h] [rbp+58h]
  DWORD *p_CurrentThreadId; // [rsp+1A0h] [rbp+60h]
  __int64 v45; // [rsp+1A8h] [rbp+68h]

  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 >= 0 || v3 != v2[22] || (v8 = v2 + 20, v2 == (int *)-80LL) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
    if ( v4 )
    {
      v5 = v4 + 32;
      AcquireSRWLockExclusive(v5);
      v19 = 0LL;
      **((_DWORD **)this + 6) = 2;
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
    else
    {
      v19 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v19);
      **((_DWORD **)this + 6) = 2;
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           (PBOOL)&v16,
           &Context)
      && (_DWORD)v16 )
    {
      *(_QWORD *)&EventDescriptor.Id = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3DE0;
      qword_1807B3DE0 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3DF8 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
        (LPINIT_ONCE *)&EventDescriptor,
        v12,
        v13);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v14 = *(_DWORD *)(v7 + 76);
      v19 = 0LL;
      p_CurrentThreadId = &CurrentThreadId;
      v45 = 4LL;
      v42 = &v14;
      v43 = 4LL;
      v40 = &v19;
      v41 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v37 = &unk_1806A1606;
      v38 = 79;
      v39 = 1;
      LODWORD(v18) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &v22,
           &Context)
      && v22 )
    {
      v19 = (__int64)&`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3DE0;
      qword_1807B3DE0 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3DF8 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v20 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v19, v9, v10);
    }
    v11 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v11 > 5u )
    {
      v27 = *((_QWORD *)v8 + 6);
      v23 = v8[17];
      v24 = v8[4];
      v28 = *((_QWORD *)v8 + 15);
      v29 = *((_QWORD *)v8 + 14);
      v25 = v8[26];
      v30 = *((_QWORD *)v8 + 12);
      v31 = *((_QWORD *)v8 + 11);
      v26 = v8[20];
      v32 = *((_QWORD *)v8 + 9);
      LODWORD(v18) = v8[8];
      v33 = *((_QWORD *)v8 + 3);
      v14 = *v8;
      v34 = *((_QWORD *)v8 + 16);
      CurrentThreadId = v8[16];
      v35 = *((_QWORD *)v8 + 7);
      LODWORD(v16) = v8[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v19 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_1806A14A6,
        *((_QWORD *)this + 6) + 8,
        (__int64)&v19,
        (__int64)&EventDescriptor,
        (__int64)&v16,
        (__int64)&v35,
        (__int64)&CurrentThreadId,
        (__int64)&v34,
        (__int64)&v14,
        (__int64)&v33,
        (__int64)&v18,
        (__int64)&v32,
        (__int64)&v26,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v25,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 8));
}
