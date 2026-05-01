/*
 * XREFs of ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806E9888
 * Callers:
 *     ?CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ @ 0x1806E7674 (-CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ.c)
 *     ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1806E8828 (-Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1806E8DB8 (-Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1802CF870 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ?get@?$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6AXXZ@Z @ 0x1806ED0C8 (-get@-$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6.c)
 */

void __fastcall wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 *a1,
        int a2)
{
  bool v3; // al
  PSRWLOCK v4; // rcx
  bool v5; // di
  __int64 v6; // rax
  _DWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF
  DWORD v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v3 = wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         a1[6],
         0,
         (int *)&v11);
  v4 = SRWLock;
  v5 = v3;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 8))(a1);
  }
  else
  {
    v6 = wil::details::static_lazy<SharedVisualHostProvider>::get(
           v4,
           _lambda_33f7b6abc9dd15539bbd1f422d65a3e7_::_lambda_invoker_cdecl_);
    v7 = *(_DWORD **)(v6 + 8);
    if ( *v7 > 5u && tlgKeywordOn(*(_QWORD *)(v6 + 8), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = a1[6];
      LODWORD(SRWLock) = 0;
      v11 = CurrentThreadId;
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        byte_180842641,
        (const GUID *)(v9 + 8),
        0LL,
        (__int64)&v12,
        (__int64)&SRWLock,
        (__int64)&v11);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
