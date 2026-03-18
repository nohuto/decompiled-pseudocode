/*
 * XREFs of IopSymlinkGetECP @ 0x1402FD8B0
 * Callers:
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x1407DFF9C (IopSymlinkProcessReparse.c)
 *     IopSymlinkRememberJunction @ 0x14087F8E8 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x14087F9E8 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140880C2C (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140765860 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
