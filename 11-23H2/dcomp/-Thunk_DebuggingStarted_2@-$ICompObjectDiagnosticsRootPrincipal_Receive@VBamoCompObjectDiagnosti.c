/*
 * XREFs of ?Thunk_DebuggingStarted_2@?$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019EECC (-DebuggingStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_E.c)
 */

__int64 __fastcall ICompObjectDiagnosticsRootPrincipal_Receive<BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl>::Thunk_DebuggingStarted_2(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::DebuggingStarted(
           a1,
           **(_DWORD **)a2,
           **(_QWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
