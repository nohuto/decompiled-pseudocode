/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x1403B6680
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x14033B07C (KiInitializeMutant.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE a1, __int64 *a2, PVOID *a3)
{
  KiInitializeMutant(*a2, 0, 1, 0);
  return 1LL;
}
