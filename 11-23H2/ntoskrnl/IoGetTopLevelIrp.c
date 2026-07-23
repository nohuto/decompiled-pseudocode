/*
 * XREFs of IoGetTopLevelIrp @ 0x1402A20A0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyWrite @ 0x14084FDE0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CF60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D550 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D7B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
