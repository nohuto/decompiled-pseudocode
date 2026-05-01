/*
 * XREFs of ?AddRef@CShellSnapComponent@@WMA@EAAKXZ @ 0x1802AB020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 192));
}
