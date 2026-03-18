/*
 * XREFs of ?AddRef@BamoDataProviderRegistrarStub@@UEAAKXZ @ 0x1801E0710
 * Callers:
 *     ?AddRef@BamoDataProviderRegistrarStub@@W7EAAKXZ @ 0x18011D170 (-AddRef@BamoDataProviderRegistrarStub@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarStub::AddRef(BamoDataProviderRegistrarStub *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
