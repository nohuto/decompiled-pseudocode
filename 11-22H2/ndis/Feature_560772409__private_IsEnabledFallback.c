/*
 * XREFs of Feature_560772409__private_IsEnabledFallback @ 0x1C00372E4
 * Callers:
 *     Feature_560772409__private_IsEnabledDeviceUsage @ 0x1C00372AC (Feature_560772409__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0037300 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_560772409__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_560772409__private_descriptor);
}
