/*
 * XREFs of Feature_2140978491__private_IsEnabledFallback @ 0x14041177C
 * Callers:
 *     Feature_2140978491__private_IsEnabledDeviceUsage @ 0x140411744 (Feature_2140978491__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2140978491__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2140978491__private_descriptor);
}
