/*
 * XREFs of ThreadLockExchangeWorker @ 0x1C01C0A4C
 * Callers:
 *     xxxTimersProc @ 0x1C003FF80 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x1C013AF08 (xxxTimersProc_Old.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchangeWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    HMLockObjectWorker(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}
