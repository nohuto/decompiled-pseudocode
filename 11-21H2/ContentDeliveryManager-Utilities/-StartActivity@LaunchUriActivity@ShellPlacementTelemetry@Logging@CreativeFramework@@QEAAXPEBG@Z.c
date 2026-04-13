/*
 * XREFs of ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18006575C
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
void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  const GUID *v9; // r9
  const GUID *v10; // r8
  __int64 v11; // rax
  int v12; // ecx
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-29h] BYREF
  __int64 v14; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  const unsigned __int16 *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_OWORD *)(v4 + 8) = 0LL;
  }
  *(_DWORD *)v4 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v7 = (__int64)v6;
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v14 = 0LL;
    v8 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v8 + 4)
      || (v9 = (const GUID *)(v8 + 24), !*(_DWORD *)(v8 + 24))
      && !*(_DWORD *)(v8 + 28)
      && !*(_DWORD *)(v8 + 32)
      && !*(_DWORD *)(v8 + 36) )
    {
      v9 = 0LL;
    }
    v10 = (const GUID *)(v8 + 8);
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      a2 = &Src;
      v12 = 2;
    }
    v20 = a2;
    v21 = v12;
    v22 = 0;
    p_SRWLock = &SRWLock;
    v19 = 4LL;
    v16 = &v14;
    v17 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_180190D11, v10, v9, 5u, &v15);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *)((char *)this + 8));
}
