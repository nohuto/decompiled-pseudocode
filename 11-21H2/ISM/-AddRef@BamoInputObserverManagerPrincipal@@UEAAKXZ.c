/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x180011680
 * Callers:
 *     ?AddRef@BamoInputProcessManagerPrincipal@@W7EAAKXZ @ 0x18004EBC0 (-AddRef@BamoInputProcessManagerPrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
