/*
 * XREFs of ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180129478
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18007D8F0 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802D9BA8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v3; // rbx
  PSRWLOCK *p_SRWLock; // rax
  char v5; // si
  __int64 v6; // rax
  int v7; // esi
  int v8; // esi
  const struct wil::FailureInfo *v9; // rdx
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rbx
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+48h] [rbp-71h]
  _BYTE v15[192]; // [rsp+50h] [rbp-69h] BYREF
  RTL_SRWLOCK *v16; // [rsp+120h] [rbp+67h] BYREF
  WINBOOL fPending; // [rsp+128h] [rbp+6Fh] BYREF
  PSRWLOCK SRWLock; // [rsp+130h] [rbp+77h] BYREF
  LPVOID Context; // [rsp+138h] [rbp+7Fh] BYREF

  fPending = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 312);
  if ( v2 )
  {
    v3 = v2 + 32;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &SRWLock;
    v5 = 1;
  }
  else
  {
    p_SRWLock = &v16;
    v5 = 2;
    v3 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
  }
  if ( (v5 & 1) != 0 && SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_DWORD *)(v6 + 72);
  if ( v7 < 1 )
  {
    memset_0(v15, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v15, v9);
  }
  if ( *(int *)(v6 + 76) >= 0 )
    *(_DWORD *)(v6 + 76) = 0;
  v8 = v7 - 1;
  *(_DWORD *)(v6 + 72) = v8;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v8 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      v13 = (__int64)&`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3DE0;
      qword_1807B3DE0 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3DF8 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v14 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v13, v10, v11);
    }
    v12 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v12 > 5u )
    {
      LODWORD(v16) = GetCurrentThreadId();
      LODWORD(SRWLock) = 0;
      v13 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_18069D52E,
        (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
        0LL,
        (__int64)&v13,
        (__int64)&SRWLock,
        (__int64)&v16);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
