/*
 * XREFs of DestroyAggregateSession @ 0x140A6F118
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140821CA8 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x140821E78 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A6F094 (CancelTimerCallbacksAndDeleteTimer.c)
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
