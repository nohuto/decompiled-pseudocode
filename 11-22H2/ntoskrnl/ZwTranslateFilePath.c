/*
 * XREFs of ZwTranslateFilePath @ 0x14041E120
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x1405F7F10 (DifZwTranslateFilePathWrapper.c)
 *     BiTranslateFilePath @ 0x140808558 (BiTranslateFilePath.c)
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD9B0 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x140A5F924 (SiBootEntryGetNtFilePath.c)
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
