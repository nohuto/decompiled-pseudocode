/*
 * XREFs of RtlpWnfNameSubscriptionCompareByStateName @ 0x18007C1DC
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800617BC (RtlpCreateWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpWnfNameSubscriptionCompareByStateName(const void *a1, __int64 a2)
{
  return memcmp(a1, (const void *)(a2 - 16), 8uLL);
}
