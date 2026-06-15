/*
 * XREFs of ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18015AA14
 * Callers:
 *     _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180039494 (_lambda_25a52f7b70a5b2ddb41b08d731639da5_--operator().c)
 *     ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x18015D7BC (-SetExpiryTimer@AtmosCheck@@AEAAX_K@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015DC08 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18015DD7C (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18015E5C0 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::CancelLicenseRefreshTimer(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  struct _TP_TIMER *v3; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  if ( v3 )
  {
    if ( IsThreadpoolTimerSet(v3) )
    {
      SetThreadpoolTimer(v3, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v3, 1);
    }
    CloseThreadpoolTimer(v3);
  }
}
