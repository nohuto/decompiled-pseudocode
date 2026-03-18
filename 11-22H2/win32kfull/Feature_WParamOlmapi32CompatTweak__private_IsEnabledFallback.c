/*
 * XREFs of Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C013A214
 * Callers:
 *     Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C013A1DC (Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01394F4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_WParamOlmapi32CompatTweak__private_descriptor);
}
