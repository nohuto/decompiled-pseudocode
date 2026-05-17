/*
 * XREFs of RtlpWnfNameSubscriptionCompareByStateName @ 0x180080B8C
 * Callers:
 *     RtlpCreateWnfNameSubscription @ 0x180059EFC (RtlpCreateWnfNameSubscription.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpWnfNameSubscriptionCompareByStateName(const void *a1, __int64 a2)
{
  return memcmp(a1, (const void *)(a2 - 16), 8uLL);
}
