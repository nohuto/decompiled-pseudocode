/*
 * XREFs of Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledFallback @ 0x1C0037540
 * Callers:
 *     Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledDeviceUsage @ 0x1C0037508 (Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C003743C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_PktmonDeadlockCausing9F__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_PktmonDeadlockCausing9F__private_descriptor);
}
