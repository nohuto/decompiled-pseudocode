/*
 * XREFs of ?Thunk_SendHapticFeedbackForPlayCount_361@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180076480
 * Callers:
 *     <none>
 * Callees:
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z @ 0x1801BA984 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z.c)
 */

int __fastcall ISimpleHapticsControllerPrincipal_Receive<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::Thunk_SendHapticFeedbackForPlayCount_361(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForPlayCount(
           a1,
           **(_WORD **)a2,
           **(float **)(a2 + 8),
           **(_DWORD **)(a2 + 16),
           **(_DWORD **)(a2 + 24));
}
