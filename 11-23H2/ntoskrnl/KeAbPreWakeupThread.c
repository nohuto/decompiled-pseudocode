/*
 * XREFs of KeAbPreWakeupThread @ 0x1402BC1BC
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x1402BBFD0 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseMutantEx @ 0x1404105DC (KeReleaseMutantEx.c)
 * Callees:
 *     KiAbFindWakeupLockEntry @ 0x1402BC1F8 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x1402BC8A0 (KiAbApplyWakeupBoost.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
