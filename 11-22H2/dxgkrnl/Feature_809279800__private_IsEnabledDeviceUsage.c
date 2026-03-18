/*
 * XREFs of Feature_809279800__private_IsEnabledDeviceUsage @ 0x1C0026D28
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B700 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_809279800__private_IsEnabledFallback @ 0x1C0026D60 (Feature_809279800__private_IsEnabledFallback.c)
 */

__int64 Feature_809279800__private_IsEnabledDeviceUsage()
{
  if ( (Feature_809279800__private_featureState & 0x10) != 0 )
    return Feature_809279800__private_featureState & 1;
  else
    return Feature_809279800__private_IsEnabledFallback((unsigned int)Feature_809279800__private_featureState, 3LL);
}
