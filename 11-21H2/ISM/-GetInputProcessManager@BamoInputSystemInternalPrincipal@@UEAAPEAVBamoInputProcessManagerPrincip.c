/*
 * XREFs of ?GetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAPEAVBamoInputProcessManagerPrincipal@@XZ @ 0x180024810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoInputProcessManagerPrincipal *__fastcall BamoInputSystemInternalPrincipal::GetInputProcessManager(
        BamoInputSystemInternalPrincipal *this)
{
  return (struct BamoInputProcessManagerPrincipal *)*((_QWORD *)this + 6);
}
