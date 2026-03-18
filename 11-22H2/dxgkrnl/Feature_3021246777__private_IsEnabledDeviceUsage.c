/*
 * XREFs of Feature_3021246777__private_IsEnabledDeviceUsage @ 0x1C00262EC
 * Callers:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C01ED178 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 * Callees:
 *     Feature_3021246777__private_IsEnabledFallback @ 0x1C0026324 (Feature_3021246777__private_IsEnabledFallback.c)
 */

__int64 Feature_3021246777__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3021246777__private_featureState & 0x10) != 0 )
    return Feature_3021246777__private_featureState & 1;
  else
    return Feature_3021246777__private_IsEnabledFallback((unsigned int)Feature_3021246777__private_featureState, 3LL);
}
