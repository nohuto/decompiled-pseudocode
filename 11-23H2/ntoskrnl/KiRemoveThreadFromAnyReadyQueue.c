/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x14020666C
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1402067BC (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140206BE0 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140243C70 (KiRemoveThreadFromSharedReadyQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 944), a3, a4);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, (unsigned int)a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, (unsigned int)a4);
}
