/*
 * XREFs of Feature_3003324730__private_IsEnabledFallback @ 0x1C0037420
 * Callers:
 *     Feature_3003324730__private_IsEnabledDeviceUsage @ 0x1C00373E8 (Feature_3003324730__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C003743C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3003324730__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3003324730__private_descriptor);
}
