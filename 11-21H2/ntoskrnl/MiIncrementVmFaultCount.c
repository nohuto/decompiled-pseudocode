/*
 * XREFs of MiIncrementVmFaultCount @ 0x140583D88
 * Callers:
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1405B2D80 (MiGetAggregationVm.c)
 */

volatile signed __int32 *__fastcall MiIncrementVmFaultCount(__int64 a1, unsigned int a2)
{
  volatile signed __int32 *result; // rax
  unsigned int v3; // edx

  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), a2);
  result = (volatile signed __int32 *)MiGetAggregationVm();
  if ( result )
    _InterlockedExchangeAdd(result, v3);
  __addgsdword(0x2E90u, v3);
  return result;
}
