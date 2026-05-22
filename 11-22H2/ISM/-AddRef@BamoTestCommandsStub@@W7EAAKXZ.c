/*
 * XREFs of ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x1800795F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoTestCommandsStub::AddRef(__int64 a1)
{
  return BamoSystemContextManagerStub::AddRef((BamoSystemContextManagerStub *)(a1 - 8));
}
