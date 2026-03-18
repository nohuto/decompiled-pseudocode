/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140208890
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368A50 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C40A0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB214 (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     ObKillProcess @ 0x14068B254 (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x14068B2C0 (CmpCmdHiveOpen.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x14074D3F8 (CmpDoFileSetSizeEx.c)
 *     EtwTraceProcess @ 0x140754EFC (EtwTraceProcess.c)
 *     FsRtlSetFileSize @ 0x1407EA694 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x1408200C8 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1409D8980 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1409D8BAC (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8CFC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D96C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D9B78 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1409D9E28 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D9EC4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA3C8 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA568 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1409DA798 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1409EF9D4 (EtwpPsProvCaptureState.c)
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
