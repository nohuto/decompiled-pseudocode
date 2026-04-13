/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065B8C
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180061BA0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000249C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800474D8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x1800627C8 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180063380 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        DWORD a2)
{
  __int64 v3; // rax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  const struct _tlgProvider_t *v7; // rdi
  const struct wil::FailureInfo *v8; // rdx
  _BYTE v9[184]; // [rsp+40h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+100h] [rbp+8h] BYREF
  DWORD CurrentThreadId; // [rsp+108h] [rbp+10h] BYREF
  __int64 v12; // [rsp+110h] [rbp+18h] BYREF

  CurrentThreadId = a2;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(v3 + 72);
  if ( v4 < 1 )
  {
    memset_0(v9, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v9, v8);
  }
  v5 = *(_DWORD *)(v3 + 76);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v3 + 76) = 0;
    v5 = 0;
  }
  v6 = v4 - 1;
  *(_DWORD *)(v3 + 72) = v6;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(SRWLock) = 0;
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        byte_180190D5F,
        (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
        0LL,
        (__int64)&v12,
        (__int64)&SRWLock,
        (__int64)&CurrentThreadId);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      (_QWORD *)a1,
      v5);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
