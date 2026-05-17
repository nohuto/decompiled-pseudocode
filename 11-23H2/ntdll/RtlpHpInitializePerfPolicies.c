/*
 * XREFs of RtlpHpInitializePerfPolicies @ 0x1800B0978
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800B0588 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180049CD0 (RtlQueryResourcePolicy.c)
 *     RtlGetNtProductType @ 0x18004A430 (RtlGetNtProductType.c)
 */

char __fastcall RtlpHpInitializePerfPolicies(int a1)
{
  int ResourcePolicy; // eax
  int v3; // eax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  RtlpHpLfhPerfFlags |= 0x98u;
  LOBYTE(ResourcePolicy) = RtlGetNtProductType(&v5);
  if ( (_BYTE)ResourcePolicy && v5 != 1 )
  {
    RtlpHpLfhPerfFlags |= 0x67u;
LABEL_11:
    RtlpHpGCInterval = -10000000LL;
    return ResourcePolicy;
  }
  if ( a1 )
    RtlpHpLfhPerfFlags |= 4u;
  ResourcePolicy = RtlQueryResourcePolicy(0, 0, (__int64)&v5, 4LL);
  if ( ResourcePolicy >= 0 && v5 > 10 )
  {
    v3 = RtlpHpLfhPerfFlags;
    if ( a1 )
      v3 = RtlpHpLfhPerfFlags | 3;
    ResourcePolicy = v3 | 0x60;
    RtlpHpLfhPerfFlags = ResourcePolicy;
    goto LABEL_11;
  }
  return ResourcePolicy;
}
