/*
 * XREFs of RtlpWnfNameSubscriptionCompareByStateName @ 0x18007BB6C
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DD84 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005BFEC (RtlpCreateWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpWnfNameSubscriptionCompareByStateName(const void *a1, __int64 a2)
{
  return memcmp(a1, (const void *)(a2 - 16), 8uLL);
}
