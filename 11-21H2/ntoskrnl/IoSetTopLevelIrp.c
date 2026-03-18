/*
 * XREFs of IoSetTopLevelIrp @ 0x140288140
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x1406FE8F4 (MiShareExistingControlArea.c)
 *     FsRtlCopyRead @ 0x14092D040 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14092DA90 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
