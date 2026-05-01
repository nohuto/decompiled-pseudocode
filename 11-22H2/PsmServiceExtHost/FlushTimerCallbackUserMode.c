/*
 * XREFs of FlushTimerCallbackUserMode @ 0x18008FC90
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1800488E4 (LookUpTableFlushComplete.c)
 *     EnableFlushTimer @ 0x180048EB0 (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x18008FCE0 (LookUpTableFlushPartial.c)
 */

void __fastcall FlushTimerCallbackUserMode(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_TIMER Timer)
{
  if ( *(_BYTE *)(Context + 356) )
  {
    *(_BYTE *)(Context + 356) = 0;
    LookUpTableFlushComplete(Context);
  }
  else
  {
    LookUpTableFlushPartial(Context);
  }
  if ( *(_DWORD *)(Context + 256) )
    EnableFlushTimer(*(struct _TP_TIMER **)(Context + 344), *(_DWORD *)(Context + 352));
}
