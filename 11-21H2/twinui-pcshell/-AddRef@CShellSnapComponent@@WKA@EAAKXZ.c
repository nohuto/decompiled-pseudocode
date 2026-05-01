/*
 * XREFs of ?AddRef@CShellSnapComponent@@WKA@EAAKXZ @ 0x18020ECD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 160));
}
