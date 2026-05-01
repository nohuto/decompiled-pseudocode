/*
 * XREFs of ?StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ @ 0x1806C020C
 * Callers:
 *     ??$Start@$$V@UserInitiatedInstall@MeetAndChatTelemetry@@SA?AV01@XZ @ 0x1806AF7C0 (--$Start@$$V@UserInitiatedInstall@MeetAndChatTelemetry@@SA-AV01@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B7174 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800BB71C (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall MeetAndChatTelemetry::UserInitiatedInstall::StartActivity(
        MeetAndChatTelemetry::UserInitiatedInstall *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  PSRWLOCK v5; // rcx
  __int64 *v6; // rax
  _DWORD *v7; // rdi
  const GUID *v8; // rax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v4 = (_DWORD *)wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
                   v3,
                   (void (__cdecl *)())_lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  v5 = SRWLock;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
         (__int64)v5,
         (void (__cdecl *)())_lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u && tlgKeywordOn(v6[1], 0x400000000000LL) )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v10 = 0x2000000LL;
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_180878F21,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v8,
      (__int64)&v10,
      (__int64)&SRWLock);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MeetAndChatTelemetry::UserInitiatedInstall *)((char *)this + 8));
}
