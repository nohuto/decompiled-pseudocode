/*
 * XREFs of Feature_560772409__private_IsEnabledDeviceUsage @ 0x1C00372AC
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     Feature_560772409__private_IsEnabledFallback @ 0x1C00372E4 (Feature_560772409__private_IsEnabledFallback.c)
 */

__int64 Feature_560772409__private_IsEnabledDeviceUsage()
{
  if ( (Feature_560772409__private_featureState & 0x10) != 0 )
    return Feature_560772409__private_featureState & 1;
  else
    return Feature_560772409__private_IsEnabledFallback((unsigned int)Feature_560772409__private_featureState, 3LL);
}
