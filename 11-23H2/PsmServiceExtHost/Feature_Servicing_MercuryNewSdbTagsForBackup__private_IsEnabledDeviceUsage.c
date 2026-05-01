/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x180052368
 * Callers:
 *     SdbpCheckFromStringVersion @ 0x1800523A4 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1800524D4 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180052610 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x180052940 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckAttribute @ 0x18009317C (SdbpCheckAttribute.c)
 *     SdbpCheckPackageAttributes @ 0x180095F00 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState;
  if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 1;
  else
    return Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback(v1, 3LL);
}
