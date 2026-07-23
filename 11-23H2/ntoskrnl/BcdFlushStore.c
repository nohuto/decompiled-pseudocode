/*
 * XREFs of BcdFlushStore @ 0x140A5C4D8
 * Callers:
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x140801F04 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140369B6C (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x140373F70 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14041CEF0 (ZwFlushKey.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408059AC (BiReleaseBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdFlushStore(HANDLE BcdStoreHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS v3; // eax
  NTSTATUS v4; // r8d
  void *v6; // rax
  NTSTATUS v7; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = (void *)BiSanitizeHandle((__int64)BcdStoreHandle);
    v7 = ZwFlushKey(v6);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v7;
  }
  else
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
