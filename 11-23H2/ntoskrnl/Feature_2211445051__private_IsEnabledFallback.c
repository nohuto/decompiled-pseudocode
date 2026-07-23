/*
 * XREFs of Feature_2211445051__private_IsEnabledFallback @ 0x140412174
 * Callers:
 *     Feature_2211445051__private_IsEnabledDeviceUsage @ 0x14041213C (Feature_2211445051__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040FAAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2211445051__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2211445051__private_descriptor);
}
