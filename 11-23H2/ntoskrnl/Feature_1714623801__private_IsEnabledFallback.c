/*
 * XREFs of Feature_1714623801__private_IsEnabledFallback @ 0x14040FB6C
 * Callers:
 *     Feature_1714623801__private_IsEnabledDeviceUsage @ 0x14040FB34 (Feature_1714623801__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F8CC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1714623801__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1714623801__private_descriptor);
}
