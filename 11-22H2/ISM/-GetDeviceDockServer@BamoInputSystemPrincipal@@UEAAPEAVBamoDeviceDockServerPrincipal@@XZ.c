/*
 * XREFs of ?GetDeviceDockServer@BamoInputSystemPrincipal@@UEAAPEAVBamoDeviceDockServerPrincipal@@XZ @ 0x18002EC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoDeviceDockServerPrincipal *__fastcall BamoInputSystemPrincipal::GetDeviceDockServer(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoDeviceDockServerPrincipal *)*((_QWORD *)this + 8);
}
