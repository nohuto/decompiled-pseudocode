/*
 * XREFs of ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x1801289F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A1DC (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::StopActivity(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this)
{
  __int64 v2; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rdx
  _QWORD *p_SRWLock; // rax
  char v6; // si
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 **v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  void (*v18)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG UserDataCount; // [rsp+20h] [rbp-120h]
  WINBOOL fPending[2]; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-78h] BYREF
  LPVOID v22; // [rsp+D0h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  PSRWLOCK SRWLock; // [rsp+F8h] [rbp-48h] BYREF
  int v27; // [rsp+100h] [rbp-40h]
  WINBOOL v28; // [rsp+108h] [rbp-38h] BYREF
  int v29; // [rsp+10Ch] [rbp-34h] BYREF
  int v30; // [rsp+110h] [rbp-30h] BYREF
  _DWORD v31[3]; // [rsp+114h] [rbp-2Ch] BYREF
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
  PSRWLOCK *v44; // [rsp+180h] [rbp+40h]
  __int64 v45; // [rsp+188h] [rbp+48h]
  WINBOOL *v46; // [rsp+190h] [rbp+50h]
  __int64 v47; // [rsp+198h] [rbp+58h]
  __int64 *v48; // [rsp+1A0h] [rbp+60h]
  __int64 v49; // [rsp+1A8h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+98h]

  fPending[0] = 0;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v2 + 88) || (v13 = v2 + 80, v2 == -80) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
    if ( v4 )
    {
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v22, v4 + 32);
      p_SRWLock = &v22;
      v6 = 1;
      v7 = (RTL_SRWLOCK *)v22;
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
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v22);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      *(_QWORD *)&EventDescriptor.Id = &`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
        (LPINIT_ONCE *)&EventDescriptor,
        v17,
        v18);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u )
    {
      LODWORD(v21) = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      fPending[1] = *(_DWORD *)(v9 + 76);
      SRWLock = 0LL;
      v48 = &v21;
      v49 = 4LL;
      v46 = &fPending[1];
      v47 = 4LL;
      v44 = &SRWLock;
      v45 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v8 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v41 = &unk_1806A0C00;
      v42 = 82;
      v43 = 1;
      LODWORD(v24) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v8 + 32), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v22 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v28, &v22) && v28 )
    {
      SRWLock = (PSRWLOCK)&`CAppManagerLogging::Instance'::`2'::wrapper;
      v22 = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v27 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&SRWLock, v14, v15);
    }
    v16 = (_DWORD *)*((_QWORD *)v22 + 1);
    if ( *v16 > 5u )
    {
      *(_QWORD *)&v31[1] = *(_QWORD *)(v13 + 48);
      v29 = *(_DWORD *)(v13 + 68);
      v30 = *(_DWORD *)(v13 + 16);
      v32 = *(_QWORD *)(v13 + 120);
      v33 = *(_QWORD *)(v13 + 112);
      v31[0] = *(_DWORD *)(v13 + 104);
      v34 = *(_QWORD *)(v13 + 96);
      v35 = *(_QWORD *)(v13 + 88);
      LODWORD(Context) = *(_DWORD *)(v13 + 80);
      v36 = *(_QWORD *)(v13 + 72);
      LODWORD(v24) = *(_DWORD *)(v13 + 32);
      v37 = *(_QWORD *)(v13 + 24);
      fPending[1] = *(_DWORD *)v13;
      v38 = *(_QWORD *)(v13 + 128);
      LODWORD(v21) = *(_DWORD *)(v13 + 64);
      v39 = *(_QWORD *)(v13 + 56);
      fPending[0] = *(_DWORD *)(v13 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v16,
        (int)&dword_1806A0A9D,
        *((_QWORD *)this + 6) + 8,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)fPending,
        (__int64)&v39,
        (__int64)&v21,
        (__int64)&v38,
        (__int64)&fPending[1],
        (__int64)&v37,
        (__int64)&v24,
        (__int64)&v36,
        (__int64)&Context,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)v31,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v31[1]);
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
