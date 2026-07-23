/*
 * XREFs of ZwTranslateFilePath @ 0x14041F160
 * Callers:
 *     sub_140628230 @ 0x140628230 (sub_140628230.c)
 *     sub_1409FD4A0 @ 0x1409FD4A0 (sub_1409FD4A0.c)
 *     sub_1409FDC88 @ 0x1409FDC88 (sub_1409FDC88.c)
 *     sub_140A20C90 @ 0x140A20C90 (sub_140A20C90.c)
 *     sub_140A21AB4 @ 0x140A21AB4 (sub_140A21AB4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(InputFilePath, *(_QWORD *)&OutputType);
}
