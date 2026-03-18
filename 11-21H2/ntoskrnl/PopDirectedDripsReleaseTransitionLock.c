/*
 * XREFs of PopDirectedDripsReleaseTransitionLock @ 0x14098C27C
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x14098C2AC (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x14098C45C (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 */

LONG __fastcall PopDirectedDripsReleaseTransitionLock(void *a1)
{
  LONG result; // eax

  _m_prefetchw(a1);
  result = _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFBF);
  if ( (result & 0x40) != 0 )
    return PopReleaseTransitionLock(7);
  return result;
}
