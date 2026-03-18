/*
 * XREFs of IoSetTopLevelIrp @ 0x1402A1E30
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x140723CDC (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x1407464F0 (MiCreateNewSection.c)
 *     FsRtlCopyWrite @ 0x14084FAE0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CD60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D350 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D5B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
