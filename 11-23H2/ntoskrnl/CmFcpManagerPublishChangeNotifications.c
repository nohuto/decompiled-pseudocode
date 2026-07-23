/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140A27F04
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A270CC (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A275A0 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A279C8 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 *     ZwQueryWnfStateData @ 0x14041DEB0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 */

int __fastcall CmFcpManagerPublishChangeNotifications(__int64 a1, unsigned __int64 a2)
{
  signed __int64 *v2; // rbx
  unsigned __int64 v4; // rdi
  __int64 *i; // rdi
  char v6; // bl
  int result; // eax
  ULONG v8; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 Buffer; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp+48h] BYREF
  ULONG ChangeStamp; // [rsp+B0h] [rbp+50h] BYREF
  ULONG v14; // [rsp+B8h] [rbp+58h] BYREF

  v12 = a2;
  v2 = (signed __int64 *)(a1 + 560);
  ChangeStamp = 0;
  v8 = 0;
  v10 = 0LL;
  v14 = 0;
  v4 = KeAbPreAcquire(a1 + 560, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0LL, v4, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  for ( i = *(__int64 **)(a1 + 568); i != (__int64 *)(a1 + 568); i = (__int64 *)*i )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 2));
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v6 = *(_BYTE *)(a1 + 339);
  Buffer = 0LL;
  BufferSize = 8;
  for ( result = ZwQueryWnfStateData(
                   &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
                   &CmFcpWnfTypeId,
                   0LL,
                   &ChangeStamp,
                   &Buffer,
                   &BufferSize);
        result >= 0;
        result = ZwQueryWnfStateData(
                   &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
                   &CmFcpWnfTypeId,
                   0LL,
                   &ChangeStamp,
                   &Buffer,
                   &BufferSize) )
  {
    result = v12;
    if ( Buffer >= v12 )
      break;
    result = ZwUpdateWnfStateData(
               &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
               &v12,
               8u,
               &CmFcpWnfTypeId,
               0LL,
               ChangeStamp,
               1u);
    if ( ((result + 0x80000000) & 0x80000000) == 0 && result != -1073741823 )
      break;
    if ( v6 && result >= 0 )
    {
      v14 = 8;
      result = ZwQueryWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, 0LL, 0LL, &v8, &v10, &v14);
      if ( result >= 0 )
      {
        result = v12;
        if ( v10 < v12 )
          return ZwUpdateWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, &v12, 8u, 0LL, 0LL, 0, 0);
      }
      return result;
    }
    Buffer = 0LL;
    BufferSize = 8;
  }
  return result;
}
