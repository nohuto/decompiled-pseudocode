/*
 * XREFs of BcdCreateObject @ 0x140802D5C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140611D90 (WheaPersistBadPageToBcd.c)
 *     BiBindEfiBootManager @ 0x140802B0C (BiBindEfiBootManager.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CC04 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140373D14 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140373DD0 (BiIsOfflineHandle.c)
 *     BiCreateObject @ 0x140803298 (BiCreateObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140803FF0 (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x140805634 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1408056DC (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdCreateObject(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 v8; // rcx
  char v9; // bp
  __int64 result; // rax
  __int64 v11; // rcx
  int Object; // ebx

  LOBYTE(v8) = BiIsOfflineHandle(a1);
  v9 = v8;
  result = BiAcquireBcdSyncMutant(v8);
  if ( (int)result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    LOBYTE(v11) = v9;
    BiReleaseBcdSyncMutant(v11);
    return (unsigned int)Object;
  }
  return result;
}
