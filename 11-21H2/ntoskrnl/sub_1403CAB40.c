/*
 * XREFs of sub_1403CAB40 @ 0x1403CAB40
 * Callers:
 *     <none>
 * Callees:
 *     HalProcessorIdle @ 0x14041B080 (HalProcessorIdle.c)
 */

__int64 __fastcall sub_1403CAB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( a5 )
  {
    __writemsr(0x48u, 0LL);
    HalProcessorIdle(72LL, 0LL);
    __writemsr(0x48u, a5);
  }
  else
  {
    HalProcessorIdle(a1, a2);
    _mm_lfence();
  }
  return 0LL;
}
