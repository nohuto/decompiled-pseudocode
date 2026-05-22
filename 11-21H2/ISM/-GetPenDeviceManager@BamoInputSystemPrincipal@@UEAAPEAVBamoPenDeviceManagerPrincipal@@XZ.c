/*
 * XREFs of ?GetPenDeviceManager@BamoInputSystemPrincipal@@UEAAPEAVBamoPenDeviceManagerPrincipal@@XZ @ 0x180024700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoPenDeviceManagerPrincipal *__fastcall BamoInputSystemPrincipal::GetPenDeviceManager(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoPenDeviceManagerPrincipal *)*((_QWORD *)this + 15);
}
