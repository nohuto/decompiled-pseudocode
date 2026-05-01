/*
 * XREFs of ?AddRef@CShellSnapComponent@@WLI@EAAKXZ @ 0x1801F89B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 184));
}
