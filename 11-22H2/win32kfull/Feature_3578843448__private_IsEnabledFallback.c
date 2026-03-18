/*
 * XREFs of Feature_3578843448__private_IsEnabledFallback @ 0x1C0138D20
 * Callers:
 *     Feature_3578843448__private_IsEnabledDeviceUsage @ 0x1C0138CE8 (Feature_3578843448__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01394F4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3578843448__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3578843448__private_descriptor);
}
