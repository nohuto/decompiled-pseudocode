/*
 * XREFs of BcdFlushStore @ 0x140A5C228
 * Callers:
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x140801C34 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1403699CC (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x140373DD0 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14041CB60 (ZwFlushKey.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140805634 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408056DC (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdFlushStore(__int64 a1)
{
  char IsOfflineHandle; // di
  NTSTATUS v3; // eax
  unsigned int v4; // r8d
  void *v6; // rax
  unsigned int v7; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = (void *)BiSanitizeHandle(a1);
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
