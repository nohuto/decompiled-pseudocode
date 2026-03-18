/*
 * XREFs of IoGetTopLevelIrp @ 0x140288160
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x14092D040 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14092DA90 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
