/*
 * XREFs of ExIsSoftBoot @ 0x1403B72A0
 * Callers:
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x1408285B0 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x1408288D4 (PoInitHiberServices.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409407A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140940A60 (IoQueryKsrPersistentMemorySizeEx.c)
 *     EtwpSavePersistedLoggers @ 0x1409ED690 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140A5464C (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C15C78 & 4) != 0;
}
