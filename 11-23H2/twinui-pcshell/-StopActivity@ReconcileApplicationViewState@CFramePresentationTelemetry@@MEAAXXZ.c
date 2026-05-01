/*
 * XREFs of ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x180023010
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002326C (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800232B4 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180394F78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394F78.c)
 */

void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::StopActivity(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this)
{
  int *v1; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  int *v9; // rsi
  _DWORD *v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v13; // [rsp+C4h] [rbp-7Ch] BYREF
  WINBOOL fPending[2]; // [rsp+C8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+D8h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E0h] [rbp-60h] BYREF
  PSRWLOCK SRWLock; // [rsp+F0h] [rbp-50h] BYREF
  int v19; // [rsp+F8h] [rbp-48h]
  WINBOOL v20; // [rsp+100h] [rbp-40h] BYREF
  int v21; // [rsp+104h] [rbp-3Ch] BYREF
  int v22; // [rsp+108h] [rbp-38h] BYREF
  int v23; // [rsp+10Ch] [rbp-34h] BYREF
  int v24; // [rsp+110h] [rbp-30h] BYREF
  __int64 v25; // [rsp+118h] [rbp-28h] BYREF
  __int64 v26; // [rsp+120h] [rbp-20h] BYREF
  __int64 v27; // [rsp+128h] [rbp-18h] BYREF
  __int64 v28; // [rsp+130h] [rbp-10h] BYREF
  __int64 v29; // [rsp+138h] [rbp-8h] BYREF
  __int64 v30; // [rsp+140h] [rbp+0h] BYREF
  __int64 v31; // [rsp+148h] [rbp+8h] BYREF
  __int64 v32; // [rsp+150h] [rbp+10h] BYREF
  __int64 v33; // [rsp+158h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+20h] BYREF
  void *v35; // [rsp+170h] [rbp+30h]
  int v36; // [rsp+178h] [rbp+38h]
  int v37; // [rsp+17Ch] [rbp+3Ch]
  PSRWLOCK *p_SRWLock; // [rsp+180h] [rbp+40h]
  __int64 v39; // [rsp+188h] [rbp+48h]
  int *v40; // [rsp+190h] [rbp+50h]
  __int64 v41; // [rsp+198h] [rbp+58h]
  DWORD *v42; // [rsp+1A0h] [rbp+60h]
  __int64 v43; // [rsp+1A8h] [rbp+68h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v9 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, &SRWLock);
    v4 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      *(_QWORD *)&EventDescriptor.Id = &`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&EventDescriptor);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      v13 = CurrentThreadId;
      v43 = 4LL;
      v41 = 4LL;
      v12 = *(_DWORD *)(v7 + 76);
      v42 = &v13;
      v40 = &v12;
      p_SRWLock = &SRWLock;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      SRWLock = 0LL;
      v39 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v35 = &unk_18084654C;
      UserData.Reserved = 2;
      v8 = *(_QWORD *)(v5 + 32);
      v36 = 82;
      v37 = 1;
      LODWORD(v16) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v8, &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v20, &Context) && v20 )
    {
      SRWLock = (PSRWLOCK)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&SRWLock);
    }
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 5u )
    {
      v25 = *((_QWORD *)v9 + 6);
      v21 = v9[17];
      v22 = v9[4];
      v26 = *((_QWORD *)v9 + 15);
      v27 = *((_QWORD *)v9 + 14);
      v11 = *((_QWORD *)this + 6);
      v23 = v9[26];
      v28 = *((_QWORD *)v9 + 12);
      v29 = *((_QWORD *)v9 + 11);
      v24 = v9[20];
      v30 = *((_QWORD *)v9 + 9);
      LODWORD(v16) = v9[8];
      v31 = *((_QWORD *)v9 + 3);
      v12 = *v9;
      v32 = *((_QWORD *)v9 + 16);
      v13 = v9[16];
      v33 = *((_QWORD *)v9 + 7);
      fPending[0] = v9[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v10,
        (int)&dword_1808463E9,
        v11 + 8,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)fPending,
        (__int64)&v33,
        (__int64)&v13,
        (__int64)&v32,
        (__int64)&v12,
        (__int64)&v31,
        (__int64)&v16,
        (__int64)&v30,
        (__int64)&v24,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v23,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v25);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
