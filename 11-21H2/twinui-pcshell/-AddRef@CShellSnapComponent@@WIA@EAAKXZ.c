/*
 * XREFs of ?AddRef@CShellSnapComponent@@WIA@EAAKXZ @ 0x1801F88F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 128));
}
