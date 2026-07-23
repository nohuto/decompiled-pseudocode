/*
 * XREFs of RtlpHpInitializePerfPolicies @ 0x1800AE8A8
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180049E30 (RtlQueryResourcePolicy.c)
 *     RtlGetNtProductType @ 0x18004A590 (RtlGetNtProductType.c)
 */

char __fastcall RtlpHpInitializePerfPolicies(int a1)
{
  int ResourcePolicy; // eax
  int v3; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF

  RtlpHpLfhPerfFlags |= 0x98u;
  LOBYTE(ResourcePolicy) = RtlGetNtProductType(&NtProductType);
  if ( (_BYTE)ResourcePolicy && NtProductType != NtProductWinNt )
  {
    RtlpHpLfhPerfFlags |= 0x67u;
LABEL_11:
    RtlpHpGCInterval.QuadPart = -10000000LL;
    return ResourcePolicy;
  }
  if ( a1 )
    RtlpHpLfhPerfFlags |= 4u;
  ResourcePolicy = RtlQueryResourcePolicy(0, 0, (__int64)&NtProductType, 4LL);
  if ( ResourcePolicy >= 0 && NtProductType > 10 )
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
