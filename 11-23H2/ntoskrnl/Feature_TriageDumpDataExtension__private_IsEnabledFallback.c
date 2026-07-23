/*
 * XREFs of Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x140410194
 * Callers:
 *     Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsage @ 0x14041015C (Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040FAAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TriageDumpDataExtension__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_TriageDumpDataExtension__private_descriptor);
}
