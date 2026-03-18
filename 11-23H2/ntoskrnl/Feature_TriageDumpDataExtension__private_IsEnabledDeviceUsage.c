/*
 * XREFs of Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsage @ 0x140410080
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403A8100 (KeAddTriageDumpDataBlock.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x14056A6D4 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x1404100B8 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
 */

__int64 Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsage()
{
  if ( (Feature_TriageDumpDataExtension__private_featureState & 0x10) != 0 )
    return Feature_TriageDumpDataExtension__private_featureState & 1;
  else
    return Feature_TriageDumpDataExtension__private_IsEnabledFallback(
             (unsigned int)Feature_TriageDumpDataExtension__private_featureState,
             3LL);
}
