/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x14099B6F0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EBE9C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EBF48 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0);
  byte_140C39CE2 = a3 != 0;
  PopReleaseAdaptiveLock();
}
