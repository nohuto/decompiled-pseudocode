/*
 * XREFs of ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x18005C1F0
 * Callers:
 *     ?Release@EndpointDevice@@W7EAAKXZ @ 0x18006BEA0 (-Release@EndpointDevice@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PersistedEndpointPolicyRule::Release(PersistedEndpointPolicyRule *this)
{
  return CUnknown::Release((PersistedEndpointPolicyRule *)((char *)this + 8));
}
