/*
 * XREFs of Feature_2838281531__private_IsEnabledFallback @ 0x1800A08D4
 * Callers:
 *     Feature_2838281531__private_IsEnabledDeviceUsage @ 0x1800A08AC (Feature_2838281531__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_2838281531__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2838281531__private_descriptor);
}
