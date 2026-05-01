/*
 * XREFs of ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800BB51C
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x180012F60 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     ??$Start@W4MeetAndChatManagerOperationKind@MeetAndChatTelemetry@@AEAVCorrelationVector@@@MeetAndChatManagerOperation@MeetAndChatTelemetry@@SA?AV01@$$QEAW4MeetAndChatManagerOperationKind@1@AEAVCorrelationVector@@@Z @ 0x1801BD9A8 (--$Start@W4MeetAndChatManagerOperationKind@MeetAndChatTelemetry@@AEAVCorrelationVector@@@MeetAnd.c)
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1806C5034 (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800BB71C (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800BBD2C (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall MeetAndChatTelemetry::MeetAndChatManagerOperation::StartActivity(
        __int64 a1,
        char a2,
        volatile signed __int64 **a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rdi
  volatile signed __int64 *v10; // rcx
  DWORD CurrentThreadId; // eax
  const GUID *v12; // rax
  __int64 v13; // r8
  const GUID *v14; // r8
  __int64 v15; // rcx
  REGHANDLE v16; // rcx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v18; // [rsp+34h] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  __int64 *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  DWORD *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  char *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  char *v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  char v38[144]; // [rsp+C0h] [rbp-40h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v6 = *(_QWORD *)(a1 + 48);
  if ( **(_DWORD **)(wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
                       v7,
                       _lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_OWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v8 = SRWLock;
  *(_DWORD *)v6 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  v9 = *(_QWORD *)(wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
                     v8,
                     _lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a3;
    v17 = a2;
    TraceLoggingCorrelationVector::ToStringImpl(
      (TraceLoggingCorrelationVector *)v10,
      _InterlockedExchangeAdd64(v10 + 17, 0LL),
      v38);
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0LL;
    v18 = CurrentThreadId;
    v12 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v13 = *(_QWORD *)(a1 + 48);
    v37 = 0;
    v14 = (const GUID *)(v13 + 8);
    v35 = &v17;
    v36 = 1;
    v15 = -1LL;
    do
      ++v15;
    while ( v38[v15] );
    v34 = 0;
    v31 = 0;
    v28 = 0;
    EventDescriptor.Keyword = 0LL;
    v32 = v38;
    v29 = &v18;
    v26 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    v33 = v15 + 1;
    v30 = 4;
    v27 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_1808789D8;
    UserData.Reserved = 2;
    v16 = *(_QWORD *)(v9 + 32);
    v24 = 97;
    v25 = 1;
    LODWORD(SRWLock) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v16, &EventDescriptor, v14, v12, 6u, &UserData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
