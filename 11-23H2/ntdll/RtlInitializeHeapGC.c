/*
 * XREFs of RtlInitializeHeapGC @ 0x180081820
 * Callers:
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 * Callees:
 *     TpAllocTimer @ 0x18002E6A0 (TpAllocTimer.c)
 */

void __fastcall RtlInitializeHeapGC(struct _TP_POOL *a1)
{
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-50h] BYREF
  PTP_TIMER Timer; // [rsp+88h] [rbp+18h] BYREF

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    Timer = 0LL;
    if ( a1 )
    {
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = a1;
      CallbackEnviron.Version = 3;
      CallbackEnviron.Size = 72;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_LOW;
      if ( TpAllocTimer(&Timer, (PTP_TIMER_CALLBACK)RtlpHpGCCallback, 0LL, &CallbackEnviron) >= 0 )
      {
        RtlpHpGCTimer = Timer;
        RtlpHpGCTimerInitialized = 1;
      }
    }
  }
}
