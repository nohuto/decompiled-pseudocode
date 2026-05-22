/*
 * XREFs of ?Thunk_PropertyChanged_10@?$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019F2C0 (-PropertyChanged@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_E.c)
 */

__int64 __fastcall ICompObjectDiagnosticsRootPrincipal_Receive<BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl>::Thunk_PropertyChanged_10(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::PropertyChanged(
           a1,
           **(_DWORD **)a2,
           **(_QWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
