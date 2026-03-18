/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x14099B7A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0);
  byte_140C39CC2 = a3 != 0;
  PopReleaseAdaptiveLock();
}
