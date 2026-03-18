/*
 * XREFs of ?AddRef@BamoCompObjectDiagnosticsRootProxy@@W7EAAKXZ @ 0x180106D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoCompObjectDiagnosticsRootProxy::AddRef(__int64 a1)
{
  return BamoDataProviderProxy::AddRef((BamoDataProviderProxy *)(a1 - 8));
}
