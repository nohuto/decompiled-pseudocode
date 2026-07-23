/*
 * XREFs of RtlQueryResourcePolicy @ 0x180049E30
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x1800494C4 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x180066B88 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800AE8A8 (RtlpHpInitializePerfPolicies.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180049EBC (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlGetSuiteMask @ 0x18004A560 (RtlGetSuiteMask.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088C00 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18012B9C0 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18012BBC8 (RtlpQueryDiskWriteConstraintPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
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
