/*
 * XREFs of Feature_2177406266__private_IsEnabledDeviceUsage @ 0x1C0026BD8
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378030 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_2177406266__private_IsEnabledFallback @ 0x1C0026C10 (Feature_2177406266__private_IsEnabledFallback.c)
 */

__int64 Feature_2177406266__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2177406266__private_featureState & 0x10) != 0 )
    return Feature_2177406266__private_featureState & 1;
  else
    return Feature_2177406266__private_IsEnabledFallback((unsigned int)Feature_2177406266__private_featureState, 3LL);
}
