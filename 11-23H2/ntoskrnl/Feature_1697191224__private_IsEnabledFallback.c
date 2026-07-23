/*
 * XREFs of Feature_1697191224__private_IsEnabledFallback @ 0x140412CB0
 * Callers:
 *     Feature_1697191224__private_IsEnabledDeviceUsage @ 0x140412C78 (Feature_1697191224__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040FAAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1697191224__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1697191224__private_descriptor);
}
