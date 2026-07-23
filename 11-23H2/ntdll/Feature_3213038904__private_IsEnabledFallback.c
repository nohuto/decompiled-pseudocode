/*
 * XREFs of Feature_3213038904__private_IsEnabledFallback @ 0x1800A0910
 * Callers:
 *     Feature_3213038904__private_IsEnabledDeviceUsage @ 0x1800A08E8 (Feature_3213038904__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_3213038904__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3213038904__private_descriptor);
}
