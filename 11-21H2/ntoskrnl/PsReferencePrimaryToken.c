/*
 * XREFs of PsReferencePrimaryToken @ 0x1407AFED0
 * Callers:
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 * Callees:
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)sub_140347920((__int64)Process, 0x746C6644u);
}
