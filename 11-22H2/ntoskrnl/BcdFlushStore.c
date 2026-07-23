/*
 * XREFs of BcdFlushStore @ 0x140A5C298
 * Callers:
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x1408041B8 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14036937C (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14041C4A0 (ZwFlushKey.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
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
