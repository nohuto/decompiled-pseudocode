/*
 * XREFs of IoSetTopLevelIrp @ 0x140288140
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 *     sub_1406FE8F4 @ 0x1406FE8F4 (sub_1406FE8F4.c)
 *     FsRtlCopyRead @ 0x14092D040 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14092DA90 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  *((_QWORD *)KeGetCurrentThread() + 162) = Irp;
}
