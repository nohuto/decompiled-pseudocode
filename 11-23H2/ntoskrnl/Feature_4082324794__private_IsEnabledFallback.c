/*
 * XREFs of Feature_4082324794__private_IsEnabledFallback @ 0x140411FB8
 * Callers:
 *     Feature_4082324794__private_IsEnabledDeviceUsage @ 0x140411F80 (Feature_4082324794__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F8CC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_4082324794__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_4082324794__private_descriptor);
}
