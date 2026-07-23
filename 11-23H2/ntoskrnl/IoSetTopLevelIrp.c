/*
 * XREFs of IoSetTopLevelIrp @ 0x1402A20C0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x140723EDC (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x1407466E0 (MiCreateNewSection.c)
 *     FsRtlCopyWrite @ 0x14084FDE0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CF60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D550 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D7B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
