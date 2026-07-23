/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140208890
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368BF0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C4280 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB784 (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     ObKillProcess @ 0x14068B254 (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x14068B2C0 (CmpCmdHiveOpen.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x14074D5E8 (CmpDoFileSetSizeEx.c)
 *     EtwTraceProcess @ 0x1407550EC (EtwTraceProcess.c)
 *     FsRtlSetFileSize @ 0x1407EA964 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x1408203C8 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1409D8B80 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1409D8DAC (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8EFC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D98C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D9D78 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1409DA028 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409DA0C4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA5C8 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA768 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1409DA998 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1409EFC64 (EtwpPsProvCaptureState.c)
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
