/*
 * XREFs of IoFreeIrp @ 0x1402AF4A0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1402512D0 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x14028D058 (IopDropIrp.c)
 *     PopFreeIrp @ 0x14028E528 (PopFreeIrp.c)
 *     IoRemoveIoCompletion @ 0x1402A9FF0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFBD0 (IopCancelIrpsInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x140322BD0 (PnpDeviceCompletionRoutine.c)
 *     IopCompletePageWrite @ 0x14036DF30 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371D90 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlGetFileExtents @ 0x14053CDD8 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x140565270 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405652D0 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x14058A12C (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CD850 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x1405DF860 (DifIoFreeIrpWrapper.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1406C73C8 (WmipSendWmiIrp.c)
 *     IopFreeCompletionListPackets @ 0x140701034 (IopFreeCompletionListPackets.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x140750DB4 (CmpFileFlushAndPurge.c)
 *     FsRtlKernelFsControlFile @ 0x140772AB0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1407737A0 (FsRtlQueryKernelEaFile.c)
 *     WmipGetFilePDO @ 0x1407C3C5C (WmipGetFilePDO.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5C30 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x1407E8980 (IopUserRundown.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1407E96E0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1407E9800 (FsRtlMdlReadEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140849184 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084D050 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084E4C4 (PopAcquireCoolingInterface.c)
 *     WmipSetTraceNotify @ 0x14086BFC0 (WmipSetTraceNotify.c)
 *     FsRtlQueryInformationFile @ 0x14093EF20 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940670 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940710 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     IoCancelFileOpen @ 0x140946F00 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x14096CE88 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x140994B58 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1409D8B80 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8EFC (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAC8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1402AF4D0 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140AC16C0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
