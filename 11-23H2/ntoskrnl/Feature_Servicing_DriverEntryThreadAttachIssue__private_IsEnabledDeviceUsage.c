/*
 * XREFs of Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage @ 0x14040FF68
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x14035B110 (IopLoadDriverImage.c)
 *     IopLoadUnloadDriver @ 0x1407CF120 (IopLoadUnloadDriver.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140AC1EA8 (IovpUnloadDriver.c)
 * Callees:
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback @ 0x14040FFA0 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_DriverEntryThreadAttachIssue__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DriverEntryThreadAttachIssue__private_featureState & 1;
  else
    return Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DriverEntryThreadAttachIssue__private_featureState,
             3LL);
}
