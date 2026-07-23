/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffersWorker @ 0x1406802E0 (CmFcpManagerPublishFeatureUsageDataBuffersWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140419640 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x14041980C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwAlpcDisconnectPort @ 0x14041B720 (ZwAlpcDisconnectPort.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x14067FC68 (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     CmFcpConnectToAlpcServer @ 0x140680B8C (CmFcpConnectToAlpcServer.c)
 *     ExUnsubscribeWnfStateChange @ 0x1407E1610 (ExUnsubscribeWnfStateChange.c)
 */

NTSTATUS __fastcall CmFcpManagerPublishFeatureUsageDataBuffers(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  NTSTATUS result; // eax
  __int64 v5; // rdx
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *i; // r14
  HANDLE v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  HANDLE PortHandle; // [rsp+60h] [rbp+8h] BYREF

  PortHandle = 0LL;
  KeWaitForSingleObject(a1 + 214, Executive, 0, 0, 0LL);
  v2 = a1[213];
  if ( v2 )
  {
    ExUnsubscribeWnfStateChange(v2);
    a1[213] = 0LL;
  }
  v3 = CmFcpConnectToAlpcServer(&PortHandle, 0LL);
  if ( v3 == -1073741772 || v3 == -1073740031 )
  {
    result = ZwUpdateWnfStateData(&WNF_CMFC_FEATURE_USAGE_DATA_PUBLISH_READY, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( result < 0 )
    {
LABEL_29:
      v10 = PortHandle;
      goto LABEL_30;
    }
    LOBYTE(v5) = 1;
    v3 = CmFcpConnectToAlpcServer(&PortHandle, v5);
  }
  if ( v3 < 0 || v3 == 258 )
  {
    result = CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
    goto LABEL_29;
  }
  v6 = a1 + 169;
  v7 = KeAbPreAcquire((__int64)(a1 + 169), 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 338, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 169, v7, (__int64)(a1 + 169));
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = (__int64 *)a1[164]; i != a1 + 164; i = (__int64 *)*i )
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 169);
    KeAbPostRelease((ULONG_PTR)(a1 + 169));
    v10 = PortHandle;
    if ( (int)CmFcpSendFeatureUsageReportAlpcMessage(PortHandle, i + 4, *((_DWORD *)i + 4)) < 0 )
    {
      CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
      goto LABEL_26;
    }
    *((_DWORD *)i + 6) = i[3] & 0xFFFFFFF8 | 2;
    v11 = KeAbPreAcquire((__int64)(a1 + 169), 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 169, v11, (__int64)(a1 + 169));
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 169);
  KeAbPostRelease((ULONG_PTR)(a1 + 169));
  v10 = PortHandle;
LABEL_26:
  result = CmFcpManagerOnFeatureUsageDataTransferComplete((__int64)a1);
LABEL_30:
  if ( v10 )
  {
    ZwAlpcDisconnectPort(v10, 0);
    return ZwClose(v10);
  }
  return result;
}
