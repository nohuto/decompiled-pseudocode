/*
 * XREFs of Feature_2683613496__private_IsEnabledDeviceUsage @ 0x1C0026A58
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C01A5B7C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 * Callees:
 *     Feature_2683613496__private_IsEnabledFallback @ 0x1C0026A90 (Feature_2683613496__private_IsEnabledFallback.c)
 */

__int64 Feature_2683613496__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2683613496__private_featureState & 0x10) != 0 )
    return Feature_2683613496__private_featureState & 1;
  else
    return Feature_2683613496__private_IsEnabledFallback((unsigned int)Feature_2683613496__private_featureState, 3LL);
}
