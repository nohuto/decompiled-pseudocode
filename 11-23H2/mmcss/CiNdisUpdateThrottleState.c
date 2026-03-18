/*
 * XREFs of CiNdisUpdateThrottleState @ 0x1C000CC90
 * Callers:
 *     CiThreadDecrementScheduledCount @ 0x1C000BA90 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000C580 (CiThreadIncrementScheduledCount.c)
 * Callees:
 *     Feature_3515646266__private_IsEnabledDeviceUsage @ 0x1C00030D8 (Feature_3515646266__private_IsEnabledDeviceUsage.c)
 */

void CiNdisUpdateThrottleState()
{
  bool v0; // zf

  if ( (unsigned int)Feature_3515646266__private_IsEnabledDeviceUsage() )
  {
    if ( !CiNdisDeviceHandle )
      return;
    v0 = CiNdisThrottleInProgress == 0;
  }
  else
  {
    if ( !CiNdisDeviceHandle )
      return;
    v0 = CiNdisThrottleInProgress == 0;
  }
  if ( v0 )
  {
    CiNdisThrottleInProgress = 1;
    IoQueueWorkItem(CiNdisThrottleWorkItem, (PIO_WORKITEM_ROUTINE)CiNdisThrottle, NormalWorkQueue, 0LL);
  }
}
