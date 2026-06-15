/*
 * XREFs of ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180015D88
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x180015100 (--1CProcess@@MEAA@XZ.c)
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x180016A40 (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::CancelDeferredBamExemptionRelease(CProcess *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 73);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 73), 1);
  }
}
