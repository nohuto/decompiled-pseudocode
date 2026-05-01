/*
 * XREFs of ?StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ @ 0x180128B30
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002326C (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180394F78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394F78.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StopActivity(IamTraceLogging::OnShellHookMessage *this)
{
  int *v1; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  char *v9; // rdi
  __int64 *v10; // rcx
  __int64 v11; // rax
  int *v12; // rbx
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v15; // rcx
  __int64 v16; // r8
  RTL_SRWLOCK *v17; // rbx
  __int64 v18; // rdx
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int UserDataCount; // [rsp+28h] [rbp-120h]
  WINBOOL fPending; // [rsp+C8h] [rbp-80h] BYREF
  int v22; // [rsp+CCh] [rbp-7Ch] BYREF
  DWORD v23; // [rsp+D0h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+E8h] [rbp-60h] BYREF
  int v27; // [rsp+F0h] [rbp-58h]
  WINBOOL v28; // [rsp+F8h] [rbp-50h] BYREF
  int v29; // [rsp+FCh] [rbp-4Ch] BYREF
  int v30; // [rsp+100h] [rbp-48h] BYREF
  int v31; // [rsp+104h] [rbp-44h] BYREF
  int v32; // [rsp+108h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+110h] [rbp-38h] BYREF
  __int64 v34; // [rsp+120h] [rbp-28h] BYREF
  int v35; // [rsp+128h] [rbp-20h]
  __int64 v36; // [rsp+130h] [rbp-18h] BYREF
  __int64 v37; // [rsp+138h] [rbp-10h] BYREF
  __int64 v38; // [rsp+140h] [rbp-8h] BYREF
  __int64 v39; // [rsp+148h] [rbp+0h] BYREF
  __int64 v40; // [rsp+150h] [rbp+8h] BYREF
  __int64 v41; // [rsp+158h] [rbp+10h] BYREF
  __int64 v42; // [rsp+160h] [rbp+18h] BYREF
  __int64 v43; // [rsp+168h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+30h] BYREF
  void *v45; // [rsp+188h] [rbp+40h]
  int v46; // [rsp+190h] [rbp+48h]
  int v47; // [rsp+194h] [rbp+4Ch]
  PSRWLOCK *p_SRWLock; // [rsp+198h] [rbp+50h]
  __int64 v49; // [rsp+1A0h] [rbp+58h]
  int *v50; // [rsp+1A8h] [rbp+60h]
  __int64 v51; // [rsp+1B0h] [rbp+68h]
  DWORD *v52; // [rsp+1B8h] [rbp+70h]
  __int64 v53; // [rsp+1C0h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+A8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v12 = v1 + 20, v1 == (int *)-80LL) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
    if ( v4 )
    {
      v17 = v4 + 32;
      AcquireSRWLockExclusive(v17);
      SRWLock = 0LL;
      **((_DWORD **)this + 6) = 2;
      if ( v17 )
        ReleaseSRWLockExclusive(v17);
    }
    else
    {
      *(_QWORD *)&EventDescriptor.Id = 0LL;
      **((_DWORD **)this + 6) = 2;
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v34 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v35 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v34, v18, v19);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v53 = 4LL;
      v51 = 4LL;
      v22 = *(_DWORD *)(v7 + 76);
      v52 = &v23;
      v50 = &v22;
      p_SRWLock = &SRWLock;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      SRWLock = 0LL;
      v49 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v45 = &unk_1808430CF;
      UserData.Reserved = 2;
      v8 = *(_QWORD *)(v5 + 32);
      v46 = 71;
      v47 = 1;
      LODWORD(v25) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v8, &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v28, &Context) && v28 )
    {
      SRWLock = (PSRWLOCK)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v27 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&SRWLock, v13, v14);
    }
    v15 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v15 > 5u )
    {
      v36 = *((_QWORD *)v12 + 6);
      v29 = v12[17];
      v30 = v12[4];
      v37 = *((_QWORD *)v12 + 15);
      v38 = *((_QWORD *)v12 + 14);
      v16 = *((_QWORD *)this + 6);
      v31 = v12[26];
      v39 = *((_QWORD *)v12 + 12);
      v40 = *((_QWORD *)v12 + 11);
      v32 = v12[20];
      v41 = *((_QWORD *)v12 + 9);
      LODWORD(v25) = v12[8];
      v42 = *((_QWORD *)v12 + 3);
      v22 = *v12;
      v43 = *((_QWORD *)v12 + 16);
      v23 = v12[16];
      v34 = *((_QWORD *)v12 + 7);
      fPending = v12[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v15,
        (int)&dword_180842F77,
        v16 + 8,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)&fPending,
        (__int64)&v34,
        (__int64)&v23,
        (__int64)&v43,
        (__int64)&v22,
        (__int64)&v42,
        (__int64)&v25,
        (__int64)&v41,
        (__int64)&v32,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v31,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v36);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v9 = (char *)this + 8;
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    v10 = *(__int64 **)v9;
    *((_DWORD *)v9 + 6) = 0;
    v11 = *v10;
    if ( *v10 )
    {
      while ( (char *)v11 != v9 )
      {
        v10 = (__int64 *)(v11 + 16);
        *(_QWORD *)v9 = v11 + 16;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_17;
      }
      *v10 = *((_QWORD *)v9 + 2);
    }
LABEL_17:
    *(_QWORD *)v9 = 0LL;
  }
}
