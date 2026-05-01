/*
 * XREFs of Feature_888503610__private_IsEnabledFallback @ 0x18004BC88
 * Callers:
 *     Feature_888503610__private_IsEnabledDeviceUsage @ 0x18004BC60 (Feature_888503610__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_888503610__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_888503610__private_descriptor);
}
