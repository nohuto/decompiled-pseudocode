/*
 * XREFs of ?StartActivity@DragLeave@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1803B1ED0
 * Callers:
 *     ?DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1803AE9C0 (-DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x1803AB8B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@@-$_.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1803BA5E0 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragLeave::StartActivity(
        AppViewManagerTabTelemetry::DragLeave *this,
        const struct _GUID *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rdi
  const GUID *v12; // rax
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v6 = *((_QWORD *)this + 6);
  v8 = *(_DWORD **)(wil::details::static_lazy<TabShellTelemetryProvider>::get(
                      v7,
                      _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  else
    *(_OWORD *)(v6 + 8) = 0LL;
  v9 = SRWLock;
  *(_DWORD *)v6 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v10 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
          v9,
          _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v11 = *(_DWORD **)(v10 + 8);
  if ( *v11 > 5u && tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x200000000000LL) )
  {
    LODWORD(SRWLock) = a3->y;
    LODWORD(v17) = a3->x;
    v14 = (__int64)a2;
    v15 = 0LL;
    LODWORD(v13) = GetCurrentThreadId();
    v12 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      byte_180843525,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v12,
      (__int64)&v15,
      (__int64)&v13,
      &v14,
      (__int64)&v17,
      (__int64)&SRWLock);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppViewManagerTabTelemetry::DragLeave *)((char *)this + 8));
}
