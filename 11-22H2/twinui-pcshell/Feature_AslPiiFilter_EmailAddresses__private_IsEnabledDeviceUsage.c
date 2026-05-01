/*
 * XREFs of Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsage @ 0x180284F90
 * Callers:
 *     PiiFilterExecute @ 0x1807384B4 (PiiFilterExecute.c)
 * Callees:
 *     <none>
 */

__int64 Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_AslPiiFilter_EmailAddresses__private_featureState;
  if ( (Feature_AslPiiFilter_EmailAddresses__private_featureState & 0x10) != 0 )
    return Feature_AslPiiFilter_EmailAddresses__private_featureState & 1;
  else
    return Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback(v1, 3LL);
}
