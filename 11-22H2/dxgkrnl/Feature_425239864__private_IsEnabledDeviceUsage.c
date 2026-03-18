/*
 * XREFs of Feature_425239864__private_IsEnabledDeviceUsage @ 0x1C0026CD4
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B700 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_425239864__private_IsEnabledFallback @ 0x1C0026D0C (Feature_425239864__private_IsEnabledFallback.c)
 */

__int64 Feature_425239864__private_IsEnabledDeviceUsage()
{
  if ( (Feature_425239864__private_featureState & 0x10) != 0 )
    return Feature_425239864__private_featureState & 1;
  else
    return Feature_425239864__private_IsEnabledFallback((unsigned int)Feature_425239864__private_featureState, 3LL);
}
