/*
 * XREFs of KiGetCurrentScheduledThreadProcessor @ 0x140577260
 * Callers:
 *     KiRemoveBoostThread @ 0x1402BB250 (KiRemoveBoostThread.c)
 *     KiApplyForegroundBoostThread @ 0x1403504D8 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCurrentScheduledThreadProcessor(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( !result )
    return *(_QWORD *)(a1 + 8);
  return result;
}
