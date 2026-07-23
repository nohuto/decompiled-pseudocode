/*
 * XREFs of Feature_1597180219__private_IsEnabledFallback @ 0x140412D04
 * Callers:
 *     Feature_1597180219__private_IsEnabledDeviceUsage @ 0x140412CCC (Feature_1597180219__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040FAAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1597180219__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1597180219__private_descriptor);
}
