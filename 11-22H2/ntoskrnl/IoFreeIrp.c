/*
 * XREFs of IoFreeIrp @ 0x1402AF1E0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1402510F0 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x14028CCA8 (IopDropIrp.c)
 *     PopFreeIrp @ 0x14028E178 (PopFreeIrp.c)
 *     IoRemoveIoCompletion @ 0x1402A9C40 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AF910 (IopCancelIrpsInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x140322760 (PnpDeviceCompletionRoutine.c)
 *     IopCompletePageWrite @ 0x14036D740 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403715A0 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlGetFileExtents @ 0x14053C938 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x140564C50 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140564CB0 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x140589CCC (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CD370 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x1405DF380 (DifIoFreeIrpWrapper.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1406C7448 (WmipSendWmiIrp.c)
 *     IopFreeCompletionListPackets @ 0x140700ED4 (IopFreeCompletionListPackets.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x1407510D4 (CmpFileFlushAndPurge.c)
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140773AC0 (FsRtlQueryKernelEaFile.c)
 *     WmipGetFilePDO @ 0x1407C3F1C (WmipGetFilePDO.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5EE0 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x1407E8C30 (IopUserRundown.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1407E9990 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1407E9AB0 (FsRtlMdlReadEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14084A0E4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084DFB0 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084F044 (PopAcquireCoolingInterface.c)
 *     WmipSetTraceNotify @ 0x14086C250 (WmipSetTraceNotify.c)
 *     FsRtlQueryInformationFile @ 0x14093EDD0 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940520 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409405C0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanupEx @ 0x140944A28 (IopExceptionCleanupEx.c)
 *     IoCancelFileOpen @ 0x140946DB0 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x14096CD38 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x140994A08 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1409D8A30 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8DAC (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACEAA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1402AF210 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140AC26D0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
