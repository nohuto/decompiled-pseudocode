/*
 * XREFs of Feature_888503610__private_IsEnabledDeviceUsage @ 0x18004BC60
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x18002C340 (CrmRpcSrvActivityAllocate.c)
 *     CrmRegistrationCreateActivity @ 0x1800438F0 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     <none>
 */

__int64 Feature_888503610__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_888503610__private_featureState;
  if ( (Feature_888503610__private_featureState & 0x10) != 0 )
    return Feature_888503610__private_featureState & 1;
  else
    return Feature_888503610__private_IsEnabledFallback(v1, 3LL);
}
