/*
 * XREFs of ?GetActivationWatcher@BamoInputSystemPrincipal@@UEAAPEAVBamoActivationWatcherPrincipal@@XZ @ 0x18002D330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoActivationWatcherPrincipal *__fastcall BamoInputSystemPrincipal::GetActivationWatcher(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoActivationWatcherPrincipal *)*((_QWORD *)this + 6);
}
