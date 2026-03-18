/*
 * XREFs of ExIsSoftBoot @ 0x140384150
 * Callers:
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     PoClearTransitionMarker @ 0x14085E2C8 (PoClearTransitionMarker.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409524A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140952770 (IoQueryKsrPersistentMemorySizeEx.c)
 *     EtwpSavePersistedLoggers @ 0x1409EDFC8 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8ED64 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C31B18 & 4) != 0;
}
