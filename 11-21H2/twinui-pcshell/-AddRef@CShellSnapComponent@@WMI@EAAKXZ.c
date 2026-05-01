/*
 * XREFs of ?AddRef@CShellSnapComponent@@WMI@EAAKXZ @ 0x18020ED10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShellSnapComponent::AddRef(__int64 a1)
{
  return HolographicPositioner::AddRef((HolographicPositioner *)(a1 - 200));
}
