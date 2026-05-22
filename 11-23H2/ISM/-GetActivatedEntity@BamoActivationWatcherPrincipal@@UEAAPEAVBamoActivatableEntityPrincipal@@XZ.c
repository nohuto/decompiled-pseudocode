/*
 * XREFs of ?GetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAPEAVBamoActivatableEntityPrincipal@@XZ @ 0x18002A600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoActivatableEntityPrincipal *__fastcall BamoActivationWatcherPrincipal::GetActivatedEntity(
        BamoActivationWatcherPrincipal *this)
{
  return (struct BamoActivatableEntityPrincipal *)*((_QWORD *)this + 7);
}
