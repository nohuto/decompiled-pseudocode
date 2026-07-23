/*
 * XREFs of DestroyAggregateSession @ 0x140A6F3C8
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140821FA8 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x140822178 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A6F344 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
