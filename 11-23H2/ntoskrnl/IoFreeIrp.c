/*
 * XREFs of IoFreeIrp @ 0x1402AF210
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140251210 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x14028CDC8 (IopDropIrp.c)
 *     PopFreeIrp @ 0x14028E298 (PopFreeIrp.c)
 *     IoRemoveIoCompletion @ 0x1402A9D60 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFB50 (IopCancelIrpsInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x140322940 (PnpDeviceCompletionRoutine.c)
 *     IopCompletePageWrite @ 0x14036DD90 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371BF0 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlGetFileExtents @ 0x14053C888 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x140564BB0 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140564C10 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x140589C3C (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CD2E0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x1405DF2F0 (DifIoFreeIrpWrapper.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1406C7398 (WmipSendWmiIrp.c)
 *     IopFreeCompletionListPackets @ 0x140700E24 (IopFreeCompletionListPackets.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x140750BC4 (CmpFileFlushAndPurge.c)
 *     FsRtlKernelFsControlFile @ 0x1407728C0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1407735B0 (FsRtlQueryKernelEaFile.c)
 *     WmipGetFilePDO @ 0x1407C398C (WmipGetFilePDO.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5960 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x1407E86B0 (IopUserRundown.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1407E9410 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1407E9530 (FsRtlMdlReadEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140848E84 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084CD50 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084E1C4 (PopAcquireCoolingInterface.c)
 *     WmipSetTraceNotify @ 0x14086BD80 (WmipSetTraceNotify.c)
 *     FsRtlQueryInformationFile @ 0x14093ED20 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940470 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940510 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanupEx @ 0x140944978 (IopExceptionCleanupEx.c)
 *     IoCancelFileOpen @ 0x140946D00 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x14096CC88 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x140994958 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1409D8980 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8CFC (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAD8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1402AF240 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140AC16D0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
