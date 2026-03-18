/*
 * XREFs of Feature_326145336__private_IsEnabledFallback @ 0x1C001A580
 * Callers:
 *     Feature_326145336__private_IsEnabledDeviceUsage @ 0x1C001A548 (Feature_326145336__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C001A3B0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_326145336__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_326145336__private_descriptor);
}
