/*
 * XREFs of ?GetSystemContextManager@BamoInputSystemInternalPrincipal@@UEAAPEAVBamoSystemContextManagerPrincipal@@XZ @ 0x180024820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoSystemContextManagerPrincipal *__fastcall BamoInputSystemInternalPrincipal::GetSystemContextManager(
        BamoInputSystemInternalPrincipal *this)
{
  return (struct BamoSystemContextManagerPrincipal *)*((_QWORD *)this + 7);
}
