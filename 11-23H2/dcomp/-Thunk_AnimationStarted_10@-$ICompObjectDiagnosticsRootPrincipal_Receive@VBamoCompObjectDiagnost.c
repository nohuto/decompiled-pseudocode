/*
 * XREFs of ?Thunk_AnimationStarted_10@?$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019F950
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019ECC8 (-AnimationStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_.c)
 */

__int64 __fastcall ICompObjectDiagnosticsRootPrincipal_Receive<BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl>::Thunk_AnimationStarted_10(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::AnimationStarted(
           a1,
           **(_DWORD **)a2,
           **(_QWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
