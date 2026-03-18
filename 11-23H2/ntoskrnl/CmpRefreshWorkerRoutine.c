/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x140A0CE20
 * Callers:
 *     <none>
 * Callees:
 *     CmpMarkKeyUnbacked @ 0x1407107FC (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14071087C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14076AD08 (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(BugCheckParameter4 + 32) != a2 || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, 8, a3, 1);
  CmpMarkKeyUnbacked(BugCheckParameter4);
  CmpDiscardKcb(BugCheckParameter4);
  return 2LL;
}
