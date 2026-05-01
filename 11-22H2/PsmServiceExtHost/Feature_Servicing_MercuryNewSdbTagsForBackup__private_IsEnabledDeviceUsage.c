/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x180052568
 * Callers:
 *     SdbpCheckFromStringVersion @ 0x1800525A4 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1800526D4 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x180052B40 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckAttribute @ 0x1800934DC (SdbpCheckAttribute.c)
 *     SdbpCheckPackageAttributes @ 0x180096260 (SdbpCheckPackageAttributes.c)
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
