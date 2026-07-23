/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x14041A648
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066E334 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140759170 (SdbpCheckAttribute.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x140A4F7C0 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140A50B50 (SdbpCheckPackageAttributes.c)
 *     SdbpFreeAppAttributes @ 0x140A50FDC (SdbpFreeAppAttributes.c)
 *     SdbpCheckFromStringVersion @ 0x140A53698 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x140A53810 (SdbpCheckUptoStringVersion.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x14041A680 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) != 0 )
    return Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 1;
  else
    return Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState,
             3LL);
}
