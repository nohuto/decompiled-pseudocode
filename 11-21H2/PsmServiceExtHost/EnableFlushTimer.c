/*
 * XREFs of EnableFlushTimer @ 0x1800948A8
 * Callers:
 *     FlushTimerCallbackUserMode @ 0x180094A60 (FlushTimerCallbackUserMode.c)
 *     InsertEventEntryInLookUpTable @ 0x180094AB0 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall EnableFlushTimer(struct _TP_TIMER *a1, unsigned int a2)
{
  struct _FILETIME v2; // rdx
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = (struct _FILETIME)(-10000LL * a2);
    if ( !dword_1800DE358 )
    {
      pftDueTime = v2;
      SetThreadpoolTimer(a1, &pftDueTime, 0, 0x1388u);
    }
  }
}
