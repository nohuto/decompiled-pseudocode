/*
 * XREFs of Feature_1746721083__private_IsEnabledFallback @ 0x1C00D2884
 * Callers:
 *     Feature_1746721083__private_IsEnabledDeviceUsage @ 0x1C00D284C (Feature_1746721083__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00D009C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1746721083__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1746721083__private_descriptor);
}
