/*
 * XREFs of IaLpssReadPmcsr @ 0x1406559DC
 * Callers:
 *     IaLpssPciSetPower @ 0x140655828 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IaLpssReadPmcsr(_DWORD *a1)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  *a1 = off_140C06A50[0]();
  return 0LL;
}
