/*
 * XREFs of Feature_1358681402__private_IsEnabledFallback @ 0x1404122A4
 * Callers:
 *     Feature_1358681402__private_IsEnabledDeviceUsage @ 0x14041226C (Feature_1358681402__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040FAAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1358681402__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1358681402__private_descriptor);
}
