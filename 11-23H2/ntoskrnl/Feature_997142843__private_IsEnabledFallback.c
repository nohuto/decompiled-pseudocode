/*
 * XREFs of Feature_997142843__private_IsEnabledFallback @ 0x14041155C
 * Callers:
 *     Feature_997142843__private_IsEnabledDeviceUsage @ 0x140411524 (Feature_997142843__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F8CC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_997142843__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_997142843__private_descriptor);
}
