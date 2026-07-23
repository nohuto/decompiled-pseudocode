/*
 * XREFs of IaLpssReadPmcsr @ 0x14067CF1C
 * Callers:
 *     IaLpssPciSetPower @ 0x14067CD68 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IaLpssReadPmcsr(_DWORD *a1)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  *a1 = off_140C06B30[0]();
  return 0LL;
}
