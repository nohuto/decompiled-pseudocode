/*
 * XREFs of ?AddRef@BamoCompObjectDiagnosticsRootStub@@UEAAKXZ @ 0x18019CDF0
 * Callers:
 *     ?AddRef@BamoCompObjectDiagnosticsStub@@W7EAAKXZ @ 0x1800B1440 (-AddRef@BamoCompObjectDiagnosticsStub@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoCompObjectDiagnosticsRootStub::AddRef(BamoCompObjectDiagnosticsRootStub *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
