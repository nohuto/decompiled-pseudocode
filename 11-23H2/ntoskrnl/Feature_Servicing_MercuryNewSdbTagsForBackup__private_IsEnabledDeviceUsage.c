/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x14041A2B8
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DDE4 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140758F80 (SdbpCheckAttribute.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x140A4F510 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140A508A0 (SdbpCheckPackageAttributes.c)
 *     SdbpFreeAppAttributes @ 0x140A50D2C (SdbpFreeAppAttributes.c)
 *     SdbpCheckFromStringVersion @ 0x140A533E8 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x140A53560 (SdbpCheckUptoStringVersion.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x14041A2F0 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback.c)
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
