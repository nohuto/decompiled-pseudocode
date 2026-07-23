/*
 * XREFs of KeInitializeSchedulerSubNodeEnumerationContext @ 0x140392630
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     PpmEventTraceHeteroSets @ 0x14082D774 (PpmEventTraceHeteroSets.c)
 *     KiSynchNumaCounterSetCallback @ 0x1409741A0 (KiSynchNumaCounterSetCallback.c)
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
