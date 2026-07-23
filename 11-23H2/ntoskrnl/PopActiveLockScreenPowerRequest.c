/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x14099B8F0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0);
  byte_140C39C42 = a3 != 0;
  PopReleaseAdaptiveLock();
}
