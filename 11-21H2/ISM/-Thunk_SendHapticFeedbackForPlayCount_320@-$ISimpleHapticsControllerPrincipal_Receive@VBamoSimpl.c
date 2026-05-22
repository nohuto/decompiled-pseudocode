/*
 * XREFs of ?Thunk_SendHapticFeedbackForPlayCount_320@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18018F170
 * Callers:
 *     <none>
 * Callees:
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z @ 0x18018E624 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z.c)
 */

__int64 __fastcall ISimpleHapticsControllerPrincipal_Receive<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::Thunk_SendHapticFeedbackForPlayCount_320(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForPlayCount(
           a1,
           **(_WORD **)a2,
           **(float **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
