/*
 * XREFs of ?GetGestureServices@BamoInputSystemPrincipal@@UEAAPEAVBamoGestureServicesPrincipal@@XZ @ 0x18002D370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoGestureServicesPrincipal *__fastcall BamoInputSystemPrincipal::GetGestureServices(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoGestureServicesPrincipal *)*((_QWORD *)this + 10);
}
