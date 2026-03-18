/*
 * XREFs of ?Present@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18010A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::Present(__int64 a1)
{
  return CLegacyStereoSwapChain::Present(a1 - *(int *)(a1 - 4));
}
