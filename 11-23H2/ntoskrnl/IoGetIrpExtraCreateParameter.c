/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140765330
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14030287C (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1407CD8CC (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x14087F518 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14088075C (IopSymlinkUpdateECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
