/*
 * XREFs of DestroyAggregateSession @ 0x140A31C78
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1408281D8 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A31BF4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
