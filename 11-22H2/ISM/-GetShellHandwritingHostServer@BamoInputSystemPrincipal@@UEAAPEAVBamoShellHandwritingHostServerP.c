/*
 * XREFs of ?GetShellHandwritingHostServer@BamoInputSystemPrincipal@@UEAAPEAVBamoShellHandwritingHostServerPrincipal@@XZ @ 0x180070680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoShellHandwritingHostServerPrincipal *__fastcall BamoInputSystemPrincipal::GetShellHandwritingHostServer(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoShellHandwritingHostServerPrincipal *)*((_QWORD *)this + 18);
}
