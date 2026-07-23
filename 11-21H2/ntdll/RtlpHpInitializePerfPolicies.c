/*
 * XREFs of RtlpHpInitializePerfPolicies @ 0x1800B0F0E
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180050520 (RtlGetNtProductType.c)
 *     RtlQueryResourcePolicy @ 0x1800533F0 (RtlQueryResourcePolicy.c)
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
  ResourcePolicy = RtlQueryResourcePolicy(0, 0, (int *)&NtProductType, 4LL);
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
