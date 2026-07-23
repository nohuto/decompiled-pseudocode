/*
 * XREFs of BcdCreateObject @ 0x14080302C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406122E0 (WheaPersistBadPageToBcd.c)
 *     BiBindEfiBootManager @ 0x140802DDC (BiBindEfiBootManager.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CE04 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140373EB4 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140373F70 (BiIsOfflineHandle.c)
 *     BiCreateObject @ 0x140803568 (BiCreateObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1408042C0 (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  int v5; // ebx
  int v6; // r14d
  __int64 v8; // rcx
  char v9; // bp
  NTSTATUS result; // eax
  __int64 v11; // rcx
  NTSTATUS Object; // ebx

  v5 = (int)Description;
  v6 = (int)Identifier;
  LOBYTE(v8) = BiIsOfflineHandle((char)BcdStoreHandle);
  v9 = v8;
  result = BiAcquireBcdSyncMutant(v8);
  if ( result >= 0 )
  {
    Object = BiCreateObject((_DWORD)BcdStoreHandle, v6, v5, 0, (__int64)BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*BcdObjectHandle, 0LL) )
        BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    }
    LOBYTE(v11) = v9;
    BiReleaseBcdSyncMutant(v11);
    return Object;
  }
  return result;
}
