/*
 * XREFs of CiNdisCleanupThrottle @ 0x1C000DD24
 * Callers:
 *     CsTerminate @ 0x1C000D8D8 (CsTerminate.c)
 * Callees:
 *     Feature_3515646266__private_IsEnabledDeviceUsage @ 0x1C00030D8 (Feature_3515646266__private_IsEnabledDeviceUsage.c)
 *     CiAcquireThreadCountLock @ 0x1C000DCBC (CiAcquireThreadCountLock.c)
 *     CiReleaseThreadCountLock @ 0x1C000DCF4 (CiReleaseThreadCountLock.c)
 */

__int64 CiNdisCleanupThrottle()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  Feature_3515646266__private_IsEnabledDeviceUsage();
  if ( CiNdisThrottleWorkItem )
  {
    if ( (unsigned int)Feature_3515646266__private_IsEnabledDeviceUsage() )
    {
      CiAcquireThreadCountLock();
      v1 = CiNdisThrottleInProgress;
      CiReleaseThreadCountLock();
      if ( v1 )
      {
        ExBlockOnAddressPushLock(&CiNdisThrottleInProgressPushLock, &CiNdisThrottleInProgress, &v1, 1LL, 0LL);
        CiAcquireThreadCountLock();
        CiReleaseThreadCountLock();
      }
    }
    IoFreeWorkItem(CiNdisThrottleWorkItem);
    if ( (unsigned int)Feature_3515646266__private_IsEnabledDeviceUsage() )
      CiNdisThrottleWorkItem = 0LL;
    if ( CiNdisDeviceHandle )
    {
      ZwClose(CiNdisDeviceHandle);
      if ( (unsigned int)Feature_3515646266__private_IsEnabledDeviceUsage() )
        CiNdisDeviceHandle = 0LL;
    }
  }
  return Feature_3515646266__private_IsEnabledDeviceUsage();
}
