/*
 * XREFs of Feature_3484202299__private_IsEnabledFallback @ 0x1C0037290
 * Callers:
 *     Feature_3484202299__private_IsEnabledDeviceUsage @ 0x1C0037258 (Feature_3484202299__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0037300 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3484202299__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3484202299__private_descriptor);
}
