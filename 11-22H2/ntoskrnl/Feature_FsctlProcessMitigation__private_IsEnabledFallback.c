/*
 * XREFs of Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040F5C8
 * Callers:
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040F5E4 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FsctlProcessMitigation__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FsctlProcessMitigation__private_descriptor);
}
