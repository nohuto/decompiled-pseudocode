/*
 * XREFs of sub_14039E0F0 @ 0x14039E0F0
 * Callers:
 *     <none>
 * Callees:
 *     HalProcessorIdle @ 0x14041B080 (HalProcessorIdle.c)
 */

__int64 __fastcall sub_14039E0F0(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle();
  return 0LL;
}
