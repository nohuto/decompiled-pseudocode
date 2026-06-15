/*
 * XREFs of ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x18011A3EC
 * Callers:
 *     ??1CXvmPowerReferenceManager@@QEAA@XZ @ 0x180119C04 (--1CXvmPowerReferenceManager@@QEAA@XZ.c)
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x18011A050 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 * Callees:
 *     <none>
 */

void __fastcall CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(CXvmPowerReferenceManager *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 15), 1);
  }
}
