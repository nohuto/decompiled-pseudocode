/*
 * XREFs of ZwTranslateFilePath @ 0x14041E7E0
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x1405F7E80 (DifZwTranslateFilePathWrapper.c)
 *     BiTranslateFilePath @ 0x140805FD8 (BiTranslateFilePath.c)
 *     ExpSetBootEntry @ 0x1409FD170 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD900 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x140A5F8B4 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
