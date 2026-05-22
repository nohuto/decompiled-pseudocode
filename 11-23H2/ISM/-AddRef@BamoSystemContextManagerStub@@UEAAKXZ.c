/*
 * XREFs of ?AddRef@BamoSystemContextManagerStub@@UEAAKXZ @ 0x180062B20
 * Callers:
 *     ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x180065B70 (-AddRef@BamoTestCommandsStub@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoSystemContextManagerStub::AddRef(BamoSystemContextManagerStub *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
