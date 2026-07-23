/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x18009F4B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeCriticalSection @ 0x18005C7C0 (RtlInitializeCriticalSection.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE a1, PRTL_CRITICAL_SECTION *a2, PVOID *a3)
{
  RtlInitializeCriticalSection(*a2);
  return 1LL;
}
