/*
 * XREFs of KeInitializeSchedulerSubNodeEnumerationContext @ 0x1403908D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     PpmEventTraceHeteroSets @ 0x14082EFC4 (PpmEventTraceHeteroSets.c)
 *     KiSynchNumaCounterSetCallback @ 0x140974050 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeSchedulerSubNodeEnumerationContext(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  a1[1] = 0LL;
  *a1 = a2;
  result = *(unsigned int *)(a2 + 16);
  *((_DWORD *)a1 + 2) = result;
  return result;
}
