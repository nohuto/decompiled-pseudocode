/*
 * XREFs of memset_0 @ 0x140014B4F
 * Callers:
 *     SmpStartCsr @ 0x140003C50 (SmpStartCsr.c)
 *     SmscpExecuteInitialCommand @ 0x140004B10 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x140004CB8 (SmExecPgmEx.c)
 *     SmpInitializeControlBlock @ 0x140005F04 (SmpInitializeControlBlock.c)
 *     SmscpLoadSubSystem @ 0x140006588 (SmscpLoadSubSystem.c)
 *     SmpSaveOldPageFiles @ 0x140006E98 (SmpSaveOldPageFiles.c)
 *     SmpPagefileInitialize @ 0x140009BE8 (SmpPagefileInitialize.c)
 *     SmpInit @ 0x14000DDE0 (SmpInit.c)
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x1400113F4 (SmpEnableCachingOnDedicatedMemoryWorker.c)
 *     BaseFindFirstDevice @ 0x140014250 (BaseFindFirstDevice.c)
 *     RtlStringCbPrintfExW @ 0x140018CCC (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140018E9C (RtlStringExHandleOtherFlagsW.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x140019FF0 (SmpRenameTargetFile.c)
 *     SmscpNotifySmOfFailure @ 0x14001B1E8 (SmscpNotifySmOfFailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
