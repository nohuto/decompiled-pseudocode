/*
 * XREFs of HalpAllocatePmcCounterSet @ 0x140506F30
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocatePmcCounterSetEx @ 0x140506F60 (HalpAllocatePmcCounterSetEx.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSet(int a1, int a2, int a3, __int64 a4)
{
  return HalpAllocatePmcCounterSetEx(a1, a2, a3, 0, a4, 0LL);
}
