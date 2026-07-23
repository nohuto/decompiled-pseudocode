/*
 * XREFs of Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040FF14
 * Callers:
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040FF30 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040FAAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FsctlProcessMitigation__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FsctlProcessMitigation__private_descriptor);
}
