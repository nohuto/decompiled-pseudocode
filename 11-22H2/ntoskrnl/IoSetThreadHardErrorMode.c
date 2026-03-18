/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140208890
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368400 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C3A40 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB2A4 (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     ObKillProcess @ 0x14068B254 (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x14068B2C0 (CmpCmdHiveOpen.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x14074D908 (CmpDoFileSetSizeEx.c)
 *     EtwTraceProcess @ 0x14075540C (EtwTraceProcess.c)
 *     FsRtlSetFileSize @ 0x1407EAC14 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x140827608 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1409D8A30 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1409D8C5C (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8DAC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D9774 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D9C28 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1409D9ED8 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D9F74 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA478 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA618 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1409DA848 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1409EFA84 (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
