/*
 * XREFs of Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback @ 0x180052590
 * Callers:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x180052568 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor);
}
