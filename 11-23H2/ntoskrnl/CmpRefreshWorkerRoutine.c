/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x140A0D0D0
 * Callers:
 *     <none>
 * Callees:
 *     CmpMarkKeyUnbacked @ 0x140710A0C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14076AEF8 (CmpDiscardKcb.c)
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
