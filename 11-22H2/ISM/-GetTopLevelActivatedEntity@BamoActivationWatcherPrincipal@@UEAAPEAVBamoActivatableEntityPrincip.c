/*
 * XREFs of ?GetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAPEAVBamoActivatableEntityPrincipal@@XZ @ 0x18002BF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoActivatableEntityPrincipal *__fastcall BamoActivationWatcherPrincipal::GetTopLevelActivatedEntity(
        BamoActivationWatcherPrincipal *this)
{
  return (struct BamoActivatableEntityPrincipal *)*((_QWORD *)this + 8);
}
