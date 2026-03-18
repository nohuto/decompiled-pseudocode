/*
 * XREFs of Feature_275551545__private_IsEnabledDeviceUsage @ 0x1C0026C2C
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0377BD0 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_275551545__private_IsEnabledFallback @ 0x1C0026C64 (Feature_275551545__private_IsEnabledFallback.c)
 */

__int64 Feature_275551545__private_IsEnabledDeviceUsage()
{
  if ( (Feature_275551545__private_featureState & 0x10) != 0 )
    return Feature_275551545__private_featureState & 1;
  else
    return Feature_275551545__private_IsEnabledFallback((unsigned int)Feature_275551545__private_featureState, 3LL);
}
