/*
 * XREFs of ?Thunk_AnimationEnded_19@?$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019EAA8 (-AnimationEnded@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedR.c)
 */

__int64 __fastcall ICompObjectDiagnosticsRootPrincipal_Receive<BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl>::Thunk_AnimationEnded_19(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::AnimationEnded(
           a1,
           **(_DWORD **)a2,
           **(_QWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
