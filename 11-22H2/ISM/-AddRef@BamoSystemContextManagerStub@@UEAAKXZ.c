/*
 * XREFs of ?AddRef@BamoSystemContextManagerStub@@UEAAKXZ @ 0x1800758F0
 * Callers:
 *     ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x1800795F0 (-AddRef@BamoTestCommandsStub@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoSystemContextManagerStub::AddRef(BamoSystemContextManagerStub *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
