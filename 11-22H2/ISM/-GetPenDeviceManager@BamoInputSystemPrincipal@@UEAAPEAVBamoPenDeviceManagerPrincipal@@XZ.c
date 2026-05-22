/*
 * XREFs of ?GetPenDeviceManager@BamoInputSystemPrincipal@@UEAAPEAVBamoPenDeviceManagerPrincipal@@XZ @ 0x18002ED00
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
