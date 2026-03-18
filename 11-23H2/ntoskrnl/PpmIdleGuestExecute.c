/*
 * XREFs of PpmIdleGuestExecute @ 0x1403CCB80
 * Callers:
 *     <none>
 * Callees:
 *     HalProcessorIdle @ 0x14041A680 (HalProcessorIdle.c)
 */

__int64 __fastcall PpmIdleGuestExecute(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle(a1, a2);
  return 0LL;
}
