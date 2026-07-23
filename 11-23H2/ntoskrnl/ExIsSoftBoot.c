/*
 * XREFs of ExIsSoftBoot @ 0x140384330
 * Callers:
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     PoClearTransitionMarker @ 0x14085E508 (PoClearTransitionMarker.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409526A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140952970 (IoQueryKsrPersistentMemorySizeEx.c)
 *     EtwpSavePersistedLoggers @ 0x1409EE258 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8EBDC (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C31AB8 & 4) != 0;
}
