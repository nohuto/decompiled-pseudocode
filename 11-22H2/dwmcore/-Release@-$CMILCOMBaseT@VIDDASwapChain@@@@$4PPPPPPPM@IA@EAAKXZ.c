/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIDDASwapChain@@@@$4PPPPPPPM@IA@EAAKXZ @ 0x180121560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDDASwapChain>::Release(__int64 a1)
{
  return CMILCOMBaseT<IDDASwapChain>::Release(a1 - *(int *)(a1 - 4) - 128);
}
