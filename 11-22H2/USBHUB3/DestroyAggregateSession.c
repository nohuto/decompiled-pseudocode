/*
 * XREFs of DestroyAggregateSession @ 0x1C008EDAC
 * Callers:
 *     CreateTlgAggregateSession @ 0x1C008EDF8 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C008F574 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1C008F720 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C008ED1C (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  void *v4; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    v4 = (void *)P[33];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ExFreePoolWithTag(P, 0);
  }
}
