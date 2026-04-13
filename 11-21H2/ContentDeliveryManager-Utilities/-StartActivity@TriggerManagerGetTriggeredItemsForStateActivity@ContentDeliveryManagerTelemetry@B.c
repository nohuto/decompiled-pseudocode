/*
 * XREFs of ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x1800A1A64
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18009E280 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001C98 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180065A6C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const char *a4)
{
  _DWORD *v8; // rdi
  const struct _tlgProvider_t *v9; // rax
  GUID *v10; // rdx
  const struct _tlgProvider_t *v11; // rdi
  __int64 v12; // rcx
  const GUID *v13; // r9
  const GUID *v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-59h] BYREF
  __int64 v22; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v24; // [rsp+60h] [rbp-29h]
  __int64 v25; // [rsp+68h] [rbp-21h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp-19h]
  __int64 v27; // [rsp+78h] [rbp-11h]
  const wchar_t *v28; // [rsp+80h] [rbp-9h]
  int v29; // [rsp+88h] [rbp-1h]
  int v30; // [rsp+8Ch] [rbp+3h]
  const wchar_t *v31; // [rsp+90h] [rbp+7h]
  int v32; // [rsp+98h] [rbp+Fh]
  int v33; // [rsp+9Ch] [rbp+13h]
  const char *v34; // [rsp+A0h] [rbp+17h]
  int v35; // [rsp+A8h] [rbp+1Fh]
  int v36; // [rsp+ACh] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = (_DWORD *)*((_QWORD *)this + 6);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = (GUID *)(v8 + 2);
  if ( *(_DWORD *)v9 <= 5u )
    *v10 = 0LL;
  else
    EventActivityIdControl(3u, v10);
  *v8 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v11 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v22 = 0LL;
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
    v34 = a4;
    v35 = v17;
    v36 = 0;
    v18 = 2;
    if ( a3 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a3[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      a3 = &Src;
      v20 = 2;
    }
    v31 = a3;
    v32 = v20;
    v33 = 0;
    if ( a2 )
    {
      do
        ++v15;
      while ( a2[v15] );
      v18 = 2 * v15 + 2;
    }
    else
    {
      a2 = &Src;
    }
    v28 = a2;
    v29 = v18;
    v30 = 0;
    p_SRWLock = &SRWLock;
    v27 = 4LL;
    v24 = &v22;
    v25 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v11, (unsigned __int8 *)dword_180192F56, v14, v13, 7u, &v23);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)((char *)this + 8));
}
