/*
 * XREFs of Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C013A16C
 * Callers:
 *     Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C013A134 (Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01394F4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_LParamOlmapi32CompatTweak__private_descriptor);
}
