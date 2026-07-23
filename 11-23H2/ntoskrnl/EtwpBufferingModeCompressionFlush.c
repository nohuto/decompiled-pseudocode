/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x140602648
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408A7C78 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     EtwpCompressPendingBuffers @ 0x140602A34 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x140602FB8 (EtwpRelinquishCompressionTarget.c)
 */

signed __int32 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  signed __int32 result; // eax

  result = *(_DWORD *)(a1 + 1168);
  if ( result )
  {
    EtwpCompressPendingBuffers();
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1144));
    return KeAbPostRelease(a1 + 1144);
  }
  return result;
}
