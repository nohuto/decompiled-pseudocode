/*
 * XREFs of ?AddRef@CShellSnapComponent@@WMA@EAAKXZ @ 0x18020ECF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 192));
}
