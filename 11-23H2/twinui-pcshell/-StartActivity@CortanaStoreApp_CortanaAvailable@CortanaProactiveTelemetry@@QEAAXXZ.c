/*
 * XREFs of ?StartActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800BC770
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5B20 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x1800BC960 (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::StartActivity(
        CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  PSRWLOCK v5; // rcx
  __int64 v6; // rdi
  const GUID *v7; // rax
  const GUID *v8; // r8
  DWORD CurrentThreadId; // [rsp+30h] [rbp-88h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-80h] BYREF
  __int64 v11; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-58h] BYREF
  void *v14; // [rsp+70h] [rbp-48h]
  int v15; // [rsp+78h] [rbp-40h]
  int v16; // [rsp+7Ch] [rbp-3Ch]
  __int64 *v17; // [rsp+80h] [rbp-38h]
  __int64 v18; // [rsp+88h] [rbp-30h]
  DWORD *p_CurrentThreadId; // [rsp+90h] [rbp-28h]
  __int64 v20; // [rsp+98h] [rbp-20h]

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v4 = *(_DWORD **)(wil::details::static_lazy<CortanaProactiveLogging>::get(
                      v3,
                      _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 5u && (unsigned __int8)tlgKeywordOn(v4, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  v5 = SRWLock;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = *(_QWORD *)(wil::details::static_lazy<CortanaProactiveLogging>::get(
                     v5,
                     _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v6 > 5u
    && (*(_QWORD *)(v6 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x400000000000LL) == *(_QWORD *)(v6 + 24) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v11 = 0x1000000LL;
    v7 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v8 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    p_CurrentThreadId = &CurrentThreadId;
    v20 = 4LL;
    v17 = &v11;
    v18 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v14 = &unk_180855255;
    v15 = 76;
    v16 = 1;
    LODWORD(SRWLock) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, v8, v7, 4u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *)((char *)this + 8));
}
