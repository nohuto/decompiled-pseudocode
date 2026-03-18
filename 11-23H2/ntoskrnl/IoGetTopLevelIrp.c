/*
 * XREFs of IoGetTopLevelIrp @ 0x1402A1E10
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyWrite @ 0x14084FAE0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CD60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D350 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D5B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
