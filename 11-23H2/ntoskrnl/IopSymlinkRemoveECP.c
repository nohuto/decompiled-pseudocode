/*
 * XREFs of IopSymlinkRemoveECP @ 0x1402FDB64
 * Callers:
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopGraftName @ 0x14087F758 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1407655D0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
