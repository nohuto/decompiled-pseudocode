/*
 * XREFs of PsReferencePrimaryToken @ 0x1406EF420
 * Callers:
 *     MiCreateSystemSection @ 0x14035F7A0 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
}
