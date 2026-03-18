/*
 * XREFs of ?AddRef@BamoDataProviderRegistrarPrincipal@@UEAAKXZ @ 0x1800FBB00
 * Callers:
 *     ?AddRef@BamoDataProviderRegistrarPrincipal@@W7EAAKXZ @ 0x18011D150 (-AddRef@BamoDataProviderRegistrarPrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::AddRef(BamoDataProviderRegistrarPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
