/*
 * XREFs of ?StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ @ 0x1801260F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A1DC (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall IamTraceLogging::OnShellHookMessage::StopActivity(IamTraceLogging::OnShellHookMessage *this)
{
  int *v2; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r8
  char *v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rsi
  int *v11; // r14
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int UserDataCount; // [rsp+20h] [rbp-120h]
  int v18; // [rsp+C0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+C4h] [rbp-7Ch] BYREF
  __int64 v20; // [rsp+C8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  int v24; // [rsp+E8h] [rbp-58h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-50h] BYREF
  WINBOOL v26; // [rsp+100h] [rbp-40h] BYREF
  int v27; // [rsp+104h] [rbp-3Ch] BYREF
  int v28; // [rsp+108h] [rbp-38h] BYREF
  int v29; // [rsp+10Ch] [rbp-34h] BYREF
  int v30; // [rsp+110h] [rbp-30h] BYREF
  __int64 v31; // [rsp+118h] [rbp-28h] BYREF
  __int64 v32; // [rsp+120h] [rbp-20h] BYREF
  __int64 v33; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34; // [rsp+130h] [rbp-10h] BYREF
  __int64 v35; // [rsp+138h] [rbp-8h] BYREF
  __int64 v36; // [rsp+140h] [rbp+0h] BYREF
  __int64 v37; // [rsp+148h] [rbp+8h] BYREF
  __int64 v38; // [rsp+150h] [rbp+10h] BYREF
  __int64 v39; // [rsp+158h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+20h] BYREF
  void *v41; // [rsp+170h] [rbp+30h]
  int v42; // [rsp+178h] [rbp+38h]
  int v43; // [rsp+17Ch] [rbp+3Ch]
  __int64 *v44; // [rsp+180h] [rbp+40h]
  __int64 v45; // [rsp+188h] [rbp+48h]
  int *v46; // [rsp+190h] [rbp+50h]
  __int64 v47; // [rsp+198h] [rbp+58h]
  DWORD *p_CurrentThreadId; // [rsp+1A0h] [rbp+60h]
  __int64 v49; // [rsp+1A8h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+98h]

  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 >= 0 || v3 != v2[22] || (v11 = v2 + 20, v2 == (int *)-80LL) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
    if ( v4 )
    {
      v10 = v4 + 32;
      AcquireSRWLockExclusive(v4 + 32);
      v23 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v23);
      **((_DWORD **)this + 6) = 2;
      if ( v10 )
        ReleaseSRWLockExclusive(v10);
    }
    else
    {
      v23 = 0LL;
      **((_DWORD **)this + 6) = 2;
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v20, &Context)
      && (_DWORD)v20 )
    {
      *(_QWORD *)&EventDescriptor.Id = &`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
        (LPINIT_ONCE *)&EventDescriptor,
        v15,
        v16);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 6);
      v18 = *(_DWORD *)(v6 + 76);
      v23 = 0LL;
      p_CurrentThreadId = &CurrentThreadId;
      v49 = 4LL;
      v46 = &v18;
      v47 = 4LL;
      v44 = &v23;
      v45 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v41 = &unk_18069D817;
      v42 = 71;
      v43 = 1;
      LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, (LPCGUID)(v6 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v26, &Context) && v26 )
    {
      v23 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v24 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v23, v12, v13);
    }
    v14 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v14 > 5u )
    {
      v31 = *((_QWORD *)v11 + 6);
      v27 = v11[17];
      v28 = v11[4];
      v32 = *((_QWORD *)v11 + 15);
      v33 = *((_QWORD *)v11 + 14);
      v29 = v11[26];
      v34 = *((_QWORD *)v11 + 12);
      v35 = *((_QWORD *)v11 + 11);
      v30 = v11[20];
      v36 = *((_QWORD *)v11 + 9);
      LODWORD(v22) = v11[8];
      v37 = *((_QWORD *)v11 + 3);
      v18 = *v11;
      v38 = *((_QWORD *)v11 + 16);
      CurrentThreadId = v11[16];
      v39 = *((_QWORD *)v11 + 7);
      LODWORD(v20) = v11[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v23 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v14,
        (int)&dword_18069D6BF,
        *((_QWORD *)this + 6) + 8,
        (__int64)&v23,
        (__int64)&EventDescriptor,
        (__int64)&v20,
        (__int64)&v39,
        (__int64)&CurrentThreadId,
        (__int64)&v38,
        (__int64)&v18,
        (__int64)&v37,
        (__int64)&v22,
        (__int64)&v36,
        (__int64)&v30,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v29,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v7 = (char *)this + 8;
    if ( *((_DWORD *)v7 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3AF,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    *((_DWORD *)v7 + 6) = 0;
    v8 = *(__int64 **)v7;
    v9 = **(_QWORD **)v7;
    if ( v9 )
    {
      while ( (char *)v9 != v7 )
      {
        v8 = (__int64 *)(v9 + 16);
        *(_QWORD *)v7 = v9 + 16;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
          goto LABEL_15;
      }
      *v8 = *((_QWORD *)v7 + 2);
    }
LABEL_15:
    *(_QWORD *)v7 = 0LL;
  }
}
