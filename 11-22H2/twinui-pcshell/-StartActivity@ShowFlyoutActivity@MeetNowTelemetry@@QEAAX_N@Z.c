/*
 * XREFs of ?StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z @ 0x1804755F8
 * Callers:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x18047544C (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18001BB9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x180475F70 (-get@-$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AX.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::StartActivity(
        MeetNowTelemetry::ShowFlyoutActivity *this,
        char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rdi
  DWORD CurrentThreadId; // eax
  int v11; // eax
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  DWORD v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v6 = *(_DWORD **)(wil::details::static_lazy<MeetNowTelemetryLogging>::get(
                      v5,
                      _lambda_50d5f5935f73d6e1cfa7918addf0e10e_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  v7 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v8 = wil::details::static_lazy<MeetNowTelemetryLogging>::get(
         v7,
         _lambda_50d5f5935f73d6e1cfa7918addf0e10e_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(v8 + 8);
  if ( *v9 > 5u && tlgKeywordOn(*(_QWORD *)(v8 + 8), 0x400000000000LL) )
  {
    LOBYTE(SRWLock) = a2;
    CurrentThreadId = GetCurrentThreadId();
    v14 = 50331648LL;
    v13 = CurrentThreadId;
    v11 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (int)v9,
      (int)&unk_180854EEB,
      *((_QWORD *)this + 6) + 8,
      v11,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&SRWLock);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MeetNowTelemetry::ShowFlyoutActivity *)((char *)this + 8));
}
