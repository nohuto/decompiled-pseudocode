/*
 * XREFs of ?AddRef@CShellSnapComponent@@WLI@EAAKXZ @ 0x1802AB000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 184));
}
