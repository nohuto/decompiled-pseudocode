/*
 * XREFs of IopSymlinkGetECP @ 0x1402FD8B0
 * Callers:
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x1407DFA1C (IopSymlinkProcessReparse.c)
 *     IopSymlinkRememberJunction @ 0x14087F418 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x14087F518 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14088075C (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140765350 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
