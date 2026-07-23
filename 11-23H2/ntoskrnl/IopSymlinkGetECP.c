/*
 * XREFs of IopSymlinkGetECP @ 0x1402FDB40
 * Callers:
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x1407DFCEC (IopSymlinkProcessReparse.c)
 *     IopSymlinkRememberJunction @ 0x14087F658 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x14087F758 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140765540 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
