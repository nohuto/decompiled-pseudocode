/*
 * XREFs of PoNotifyVSyncChange @ 0x14032BFE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C330 (PoFxSendSystemLatencyUpdate.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
