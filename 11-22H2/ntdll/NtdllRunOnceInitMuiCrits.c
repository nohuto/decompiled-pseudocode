/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x18009E420
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeCriticalSection @ 0x18005D020 (RtlInitializeCriticalSection.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(__int64 a1, __int64 *a2)
{
  RtlInitializeCriticalSection(*a2);
  return 1LL;
}
