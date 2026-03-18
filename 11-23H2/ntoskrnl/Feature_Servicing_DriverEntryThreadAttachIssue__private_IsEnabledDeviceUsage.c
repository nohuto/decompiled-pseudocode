/*
 * XREFs of Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage @ 0x14040FD88
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x14035AF70 (IopLoadDriverImage.c)
 *     IopLoadUnloadDriver @ 0x1407CEE50 (IopLoadUnloadDriver.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140AC1EB8 (IovpUnloadDriver.c)
 * Callees:
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback @ 0x14040FDC0 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledFallback.c)
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
