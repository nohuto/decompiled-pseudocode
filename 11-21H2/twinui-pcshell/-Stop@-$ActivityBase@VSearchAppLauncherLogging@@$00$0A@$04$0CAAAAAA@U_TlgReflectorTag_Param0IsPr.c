/*
 * XREFs of ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C848
 * Callers:
 *     _lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator() @ 0x18019C97C (_lambda_ccf65d9649214ffd774f2e628ae5cb52_--operator().c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::operator() @ 0x18019CDF8 (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--operator().c)
 *     _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator() @ 0x1801A7048 (_lambda_5a859347bbbbbb78c34c3a6938b2a83e_--operator().c)
 * Callees:
 *     ?SetStopResult@?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002F9D0 (-SetStopResult@-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?LockExclusive@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180078BF4 (-LockExclusive@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?ReportStopActivity@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18015C8B0 (-ReportStopActivity@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflector.c)
 */

void __fastcall wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        unsigned int a2)
{
  bool v3; // bl
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = a2;
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v8);
  v3 = wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         0,
         (int *)&v9);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  if ( v3 )
  {
    wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      a1,
      v9);
  }
  else
  {
    v5 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                     v4,
                     _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
    if ( *v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *(_QWORD *)(a1 + 48);
      LODWORD(v8) = 0;
      v9 = CurrentThreadId;
      v10 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        byte_18069D52E,
        (const GUID *)(v7 + 8),
        0LL,
        (__int64)&v10,
        (__int64)&v8,
        (__int64)&v9);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
