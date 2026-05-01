/*
 * XREFs of Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage @ 0x18005352C
 * Callers:
 *     AslPathClean @ 0x18009D768 (AslPathClean.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_Mercury_App_Backup_V2__private_featureState;
  if ( (Feature_Mercury_App_Backup_V2__private_featureState & 0x10) != 0 )
    return Feature_Mercury_App_Backup_V2__private_featureState & 1;
  else
    return Feature_Mercury_App_Backup_V2__private_IsEnabledFallback(v1, 3LL);
}
