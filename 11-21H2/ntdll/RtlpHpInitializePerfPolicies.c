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
  int v2; // eax
  int v3; // eax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  RtlpHpLfhPerfFlags |= 0x98u;
  LOBYTE(v2) = RtlGetNtProductType(&v5);
  if ( (_BYTE)v2 && v5 != 1 )
  {
    RtlpHpLfhPerfFlags |= 0x67u;
LABEL_11:
    RtlpHpGCInterval = -10000000LL;
    return v2;
  }
  if ( a1 )
    RtlpHpLfhPerfFlags |= 4u;
  v2 = RtlQueryResourcePolicy(0, 0, &v5, 4LL);
  if ( v2 >= 0 && v5 > 10 )
  {
    v3 = RtlpHpLfhPerfFlags;
    if ( a1 )
      v3 = RtlpHpLfhPerfFlags | 3;
    v2 = v3 | 0x60;
    RtlpHpLfhPerfFlags = v2;
    goto LABEL_11;
  }
  return v2;
}
