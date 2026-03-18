/*
 * XREFs of Feature_2177406266__private_IsEnabledFallback @ 0x1C0026C10
 * Callers:
 *     Feature_2177406266__private_IsEnabledDeviceUsage @ 0x1C0026BD8 (Feature_2177406266__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00249D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2177406266__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_2177406266__private_descriptor);
}
