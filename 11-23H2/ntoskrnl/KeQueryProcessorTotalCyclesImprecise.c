/*
 * XREFs of KeQueryProcessorTotalCyclesImprecise @ 0x140363810
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140257330 (KeGetPrcb.c)
 */

__int64 __fastcall KeQueryProcessorTotalCyclesImprecise(unsigned int a1)
{
  __int64 result; // rax

  result = KeGetPrcb(a1);
  if ( result )
    return *(_QWORD *)(result + 33152);
  return result;
}
