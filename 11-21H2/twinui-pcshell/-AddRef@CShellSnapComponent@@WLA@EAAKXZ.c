/*
 * XREFs of ?AddRef@CShellSnapComponent@@WLA@EAAKXZ @ 0x1801F8990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 176));
}
