/*
 * XREFs of ?StopActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@MEAAXXZ @ 0x18012B460
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x18012AF8C (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1802DDDC0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DDDC0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::StopActivity(
        CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *this)
{
  __int64 v2; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rdx
  PSRWLOCK *p_SRWLock; // rax
  char v6; // si
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 **v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  int v16; // ecx
  __int64 v17; // rdx
  void (*v18)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int UserDataCount; // [rsp+28h] [rbp-100h]
  WINBOOL fPending; // [rsp+A8h] [rbp-80h] BYREF
  _DWORD v21[3]; // [rsp+ACh] [rbp-7Ch] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+C8h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v30; // [rsp+100h] [rbp-28h] BYREF
  __int64 v31; // [rsp+108h] [rbp-20h] BYREF
  __int64 v32; // [rsp+110h] [rbp-18h] BYREF
  __int64 v33; // [rsp+118h] [rbp-10h] BYREF
  __int64 v34; // [rsp+120h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+128h] [rbp+0h] BYREF
  void *v36; // [rsp+138h] [rbp+10h]
  int v37; // [rsp+140h] [rbp+18h]
  int v38; // [rsp+144h] [rbp+1Ch]
  PSRWLOCK *v39; // [rsp+148h] [rbp+20h]
  int v40; // [rsp+150h] [rbp+28h]
  int v41; // [rsp+154h] [rbp+2Ch]
  _DWORD *v42; // [rsp+158h] [rbp+30h]
  int v43; // [rsp+160h] [rbp+38h]
  int v44; // [rsp+164h] [rbp+3Ch]
  _DWORD *v45; // [rsp+168h] [rbp+40h]
  int v46; // [rsp+170h] [rbp+48h]
  int v47; // [rsp+174h] [rbp+4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+190h] [rbp+68h]

  fPending = 0;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v2 + 88) || (v13 = v2 + 80, v2 == -80) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
    if ( v4 )
    {
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v21[1], v4 + 32);
      p_SRWLock = (PSRWLOCK *)&v21[1];
      v6 = 1;
      v7 = *(RTL_SRWLOCK **)&v21[1];
    }
    else
    {
      p_SRWLock = &SRWLock;
      v6 = 2;
      v7 = 0LL;
    }
    *p_SRWLock = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v6 & 1) != 0 )
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v21[1]);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      *(_QWORD *)&EventDescriptor.Id = &`CortanaProactiveLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B4040;
      qword_1807B4040 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B4058 = (__int64)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
        (LPINIT_ONCE *)&EventDescriptor,
        v17,
        v18);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u
      && (*(_QWORD *)(v8 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v8 + 24) & 0x400000000000LL) == *(_QWORD *)(v8 + 24) )
    {
      v21[1] = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      v21[0] = *(_DWORD *)(v9 + 76);
      SRWLock = (PSRWLOCK)0x1000000;
      v45 = &v21[1];
      v46 = 4;
      v47 = 0;
      v42 = v21;
      v43 = 4;
      v44 = 0;
      v39 = &SRWLock;
      v40 = 8;
      v41 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = *(_QWORD *)(v8 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v36 = &unk_1806ACECC;
      v37 = 85;
      v38 = 1;
      LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v8 + 32), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v15 = (_DWORD *)wil::details::static_lazy<CortanaProactiveLogging>::get(
                      v14,
                      _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)[1];
    if ( *v15 > 5u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
    {
      v27 = *(_QWORD *)(v13 + 120);
      v28 = *(_QWORD *)(v13 + 112);
      LODWORD(v26) = *(_DWORD *)(v13 + 104);
      v29 = *(_QWORD *)(v13 + 96);
      v30 = *(_QWORD *)(v13 + 88);
      LODWORD(Context) = *(_DWORD *)(v13 + 80);
      v31 = *(_QWORD *)(v13 + 72);
      LODWORD(v23) = *(_DWORD *)(v13 + 32);
      v32 = *(_QWORD *)(v13 + 24);
      v21[0] = *(_DWORD *)v13;
      v33 = *(_QWORD *)(v13 + 128);
      v21[1] = *(_DWORD *)(v13 + 64);
      v34 = *(_QWORD *)(v13 + 56);
      fPending = *(_DWORD *)(v13 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = (PSRWLOCK)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v16,
        (int)&dword_1806ACF7A,
        *((_QWORD *)this + 6) + 8,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)&fPending,
        (__int64)&v34,
        (__int64)&v21[1],
        (__int64)&v33,
        (__int64)v21,
        (__int64)&v32,
        (__int64)&v23,
        (__int64)&v31,
        (__int64)&Context,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v26,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3AF,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    *((_DWORD *)this + 8) = 0;
    v11 = *v10;
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 )
        break;
      if ( (__int64 **)v12 == v10 )
      {
        *v11 = *((_QWORD *)this + 3);
        break;
      }
      v11 = (__int64 *)(v12 + 16);
      *v10 = (__int64 *)(v12 + 16);
    }
    *v10 = 0LL;
  }
}
