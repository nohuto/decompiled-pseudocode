/*
 * XREFs of ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x18004EBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall BamoTestCommandsStub::AddRef(__int64 a1)
{
  return BamoSystemContextManagerStub::AddRef((BamoSystemContextManagerStub *)(a1 - 8));
}
