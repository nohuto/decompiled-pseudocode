/*
 * XREFs of RtlQueryResourcePolicy @ 0x1800533F0
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18005347C (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x180054B7C (RtlpHpLfhContextInitialize.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800B0F0E (RtlpHpInitializePerfPolicies.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800163A0 (RtlRunOnceExecuteOnce.c)
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x1800509E0 (RtlGetNtSystemRoot.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180053384 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18008E05C (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180126D38 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180126F40 (RtlpQueryDiskWriteConstraintPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, int *a3, __int64 a4)
{
  int v8; // ebx
  int v9; // ebx
  PWSTR NtSystemRoot; // rax
  PWSTR v11; // rax

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0LL, 0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return RtlpQueryPhysicalMemoryPolicy(a3);
    return 3221225485LL;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a4 == 4 )
        return RtlpQueryDiskSpeedPolicy(a3);
      return 3221225485LL;
    }
    if ( v9 != 1 )
      return 3221225475LL;
    if ( a4 == 4 )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot, a3);
    }
    return 3221225485LL;
  }
  if ( a4 != 4 )
    return 3221225485LL;
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    v11 = L"C:\\data\\programs\\windowsapps";
  else
    v11 = RtlGetNtSystemRoot();
  return RtlpQueryDiskSpacePolicy(v11, a3);
}
