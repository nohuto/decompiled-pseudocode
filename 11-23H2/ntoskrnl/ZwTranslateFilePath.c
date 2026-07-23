/*
 * XREFs of ZwTranslateFilePath @ 0x14041EB70
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x1405F83F0 (DifZwTranslateFilePathWrapper.c)
 *     BiTranslateFilePath @ 0x1408062A8 (BiTranslateFilePath.c)
 *     ExpSetBootEntry @ 0x1409FD400 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDB90 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x140A5FB64 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
