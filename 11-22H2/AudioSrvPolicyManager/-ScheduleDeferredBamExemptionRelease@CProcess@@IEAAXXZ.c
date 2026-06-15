/*
 * XREFs of ?ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180029E40
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000ADE0 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ScheduleDeferredBamExemptionRelease(_QWORD *pv)
{
  struct _TP_TIMER *v2; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !pv[73] )
    pv[73] = CreateThreadpoolTimer(
               (PTP_TIMER_CALLBACK)lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_,
               pv,
               0LL);
  v2 = (struct _TP_TIMER *)pv[73];
  if ( v2 )
  {
    pftDueTime.dwHighDateTime = -1;
    pftDueTime.dwLowDateTime = -200000000;
    SetThreadpoolTimer(v2, &pftDueTime, 0, 0);
  }
}
