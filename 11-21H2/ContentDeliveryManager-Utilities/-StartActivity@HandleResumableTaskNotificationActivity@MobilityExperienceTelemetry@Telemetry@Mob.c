/*
 * XREFs of ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x18007A9C8
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001C98 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18003C030 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180065A6C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const char *a4)
{
  __int64 v8; // rbx
  const struct _tlgProvider_t *v9; // rax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  const GUID *v13; // r9
  const GUID *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-59h] BYREF
  __int64 v20; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-29h]
  __int64 v23; // [rsp+70h] [rbp-21h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+80h] [rbp-11h]
  struct _GUID *v26; // [rsp+88h] [rbp-9h]
  __int64 v27; // [rsp+90h] [rbp-1h]
  const unsigned __int16 *v28; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+A0h] [rbp+Fh]
  int v30; // [rsp+A4h] [rbp+13h]
  const char *v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+B0h] [rbp+1Fh]
  int v33; // [rsp+B4h] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
  v9 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x400000000000LL) == *((_QWORD *)v9 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_OWORD *)(v8 + 8) = 0LL;
  }
  *(_DWORD *)v8 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v10 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v11 = (__int64)v10;
  if ( *(_DWORD *)v10 > 5u
    && (*((_QWORD *)v10 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x400000000000LL) == *((_QWORD *)v10 + 3) )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v20 = 0LL;
    v12 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v12 + 4)
      || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
      && !*(_DWORD *)(v12 + 28)
      && !*(_DWORD *)(v12 + 32)
      && !*(_DWORD *)(v12 + 36) )
    {
      v13 = 0LL;
    }
    v14 = (const GUID *)(v12 + 8);
    v15 = -1LL;
    if ( a4 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a4[v16] );
      v17 = v16 + 1;
    }
    else
    {
      a4 = (const char *)&word_180121FC0;
      v17 = 1;
    }
    v31 = a4;
    v32 = v17;
    v33 = 0;
    if ( a3 )
    {
      do
        ++v15;
      while ( a3[v15] );
      v18 = 2 * v15 + 2;
    }
    else
    {
      a3 = &Src;
      v18 = 2;
    }
    v28 = a3;
    v29 = v18;
    v30 = 0;
    v26 = a2;
    v27 = 16LL;
    p_SRWLock = &SRWLock;
    v25 = 4LL;
    v22 = &v20;
    v23 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1801919B9, v14, v13, 7u, &v21);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)((char *)this + 8));
}
