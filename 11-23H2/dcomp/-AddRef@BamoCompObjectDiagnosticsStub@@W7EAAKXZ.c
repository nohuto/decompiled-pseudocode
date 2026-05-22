/*
 * XREFs of ?AddRef@BamoCompObjectDiagnosticsStub@@W7EAAKXZ @ 0x1800B1440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall BamoCompObjectDiagnosticsStub::AddRef(__int64 a1)
{
  return BamoCompObjectDiagnosticsRootStub::AddRef((BamoCompObjectDiagnosticsRootStub *)(a1 - 8));
}
