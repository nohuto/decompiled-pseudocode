/*
 * XREFs of ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@7EBA?AU_LUID@@XZ @ 0x180120530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CLegacySwapChain::GetAdapterLuid((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 8), a2);
}
