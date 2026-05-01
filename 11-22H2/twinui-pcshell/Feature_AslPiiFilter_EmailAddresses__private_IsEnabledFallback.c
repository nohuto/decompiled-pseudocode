/*
 * XREFs of Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback @ 0x180284FB8
 * Callers:
 *     Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsage @ 0x180284F90 (Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2);
}
