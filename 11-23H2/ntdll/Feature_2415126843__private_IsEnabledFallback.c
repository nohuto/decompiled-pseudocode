/*
 * XREFs of Feature_2415126843__private_IsEnabledFallback @ 0x18009F510
 * Callers:
 *     Feature_2415126843__private_IsEnabledDeviceUsage @ 0x18009F4E8 (Feature_2415126843__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_2415126843__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2415126843__private_descriptor);
}
