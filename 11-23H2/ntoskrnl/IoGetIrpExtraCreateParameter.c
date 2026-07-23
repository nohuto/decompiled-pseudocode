/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140765520
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FDBE0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x140302B0C (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1407CDB9C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x14087F758 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
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
