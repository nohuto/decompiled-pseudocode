/*
 * XREFs of Feature_Mercury_App_Backup_V2__private_IsEnabledFallback @ 0x180053554
 * Callers:
 *     Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage @ 0x18005352C (Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Mercury_App_Backup_V2__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Mercury_App_Backup_V2__private_descriptor);
}
