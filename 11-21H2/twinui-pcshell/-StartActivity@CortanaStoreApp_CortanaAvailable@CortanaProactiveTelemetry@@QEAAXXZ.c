/*
 * XREFs of ?StartActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18012AD84
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x18012AF8C (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::StartActivity(RTL_SRWLOCK **this)
{
  CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *v1; // rsi
  RTL_SRWLOCK *v2; // rdx
  PSRWLOCK *p_SRWLock; // rax
  char v4; // di
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  __int64 v8; // rbx
  const GUID *v9; // rax
  const GUID *v10; // r8
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-29h] BYREF
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp-21h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int64 *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  PSRWLOCK *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  v1 = (CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *)this;
  LODWORD(SRWLock) = 0;
  v2 = this[39];
  if ( v2 )
  {
    wil::AcquireSRWLockExclusive(&v12, v2 + 32);
    p_SRWLock = &v12;
    v4 = 1;
    v5 = v12;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v4 = 2;
    v5 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    this = (RTL_SRWLOCK **)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 )
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  v6 = *((_QWORD *)v1 + 6);
  v7 = *(_DWORD **)(wil::details::static_lazy<CortanaProactiveLogging>::get(
                      this,
                      _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  else
    *(_OWORD *)(v6 + 8) = 0LL;
  *(_DWORD *)v6 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v8 = *(_QWORD *)(wil::details::static_lazy<CortanaProactiveLogging>::get(
                     v7,
                     _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v8 > 5u
    && (*(_QWORD *)(v8 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x400000000000LL) == *(_QWORD *)(v8 + 24) )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v13 = 0x1000000LL;
    v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(v1);
    v10 = (const GUID *)(*((_QWORD *)v1 + 6) + 8LL);
    v22 = &SRWLock;
    v23 = 4;
    v24 = 0;
    v19 = &v13;
    v20 = 8;
    v21 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Ptr = *(_QWORD *)(v8 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v16 = &unk_1806ACF2D;
    v17 = 76;
    v18 = 1;
    LODWORD(v12) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v8 + 32), &EventDescriptor, v10, v9, 4u, &UserData);
  }
  if ( !*((_DWORD *)v1 + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *)((char *)v1 + 8));
}
