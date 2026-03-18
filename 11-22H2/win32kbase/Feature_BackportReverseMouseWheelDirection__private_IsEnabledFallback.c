/*
 * XREFs of Feature_BackportReverseMouseWheelDirection__private_IsEnabledFallback @ 0x1C00D5634
 * Callers:
 *     Feature_BackportReverseMouseWheelDirection__private_IsEnabledDeviceUsage @ 0x1C00D55FC (Feature_BackportReverseMouseWheelDirection__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00D009C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_BackportReverseMouseWheelDirection__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_BackportReverseMouseWheelDirection__private_descriptor);
}
