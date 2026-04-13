/*
 * XREFs of ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x180065584
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180061BA0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001C98 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x1800627C8 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180065A6C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v8; // rdi
  const struct _tlgProvider_t *v9; // rdi
  __int64 v10; // rcx
  const GUID *v11; // r9
  const GUID *v12; // r10
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  int v17; // [rsp+30h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  PSRWLOCK *p_SRWLock; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  const unsigned __int16 *v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  const unsigned __int16 *v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]
  int *v31; // [rsp+B0h] [rbp+17h]
  __int64 v32; // [rsp+B8h] [rbp+1Fh]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CreativeFramework::Logging::ShellPlacementLogging::Provider() <= 5u )
    *(_OWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  *(_DWORD *)v8 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v9 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    v17 = a4;
    LODWORD(SRWLock) = GetCurrentThreadId();
    v19 = 0LL;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    v12 = (const GUID *)(v10 + 8);
    v31 = &v17;
    v32 = 4LL;
    v13 = 2;
    v14 = -1LL;
    if ( a3 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a3[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      a3 = &Src;
      v16 = 2;
    }
    v28 = a3;
    v29 = v16;
    v30 = 0;
    if ( a2 )
    {
      do
        ++v14;
      while ( a2[v14] );
      v13 = 2 * v14 + 2;
    }
    else
    {
      a2 = &Src;
    }
    v25 = a2;
    v26 = v13;
    v27 = 0;
    p_SRWLock = &SRWLock;
    v24 = 4LL;
    v21 = &v19;
    v22 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v9, (unsigned __int8 *)dword_18019059E, v12, v11, 7u, &v20);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)((char *)this + 8));
}
