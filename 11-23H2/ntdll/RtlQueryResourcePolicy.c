/*
 * XREFs of RtlQueryResourcePolicy @ 0x180049CD0
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x180049364 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x180066B6C (RtlpHpLfhContextInitialize.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800B0978 (RtlpHpInitializePerfPolicies.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180049D5C (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlGetSuiteMask @ 0x18004A400 (RtlGetSuiteMask.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089400 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18012CEB4 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18012D0BC (RtlpQueryDiskWriteConstraintPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // ebx
  int v13; // ebx
  __int64 NtSystemRoot; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const wchar_t *v19; // rax

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(
    &RtlpTestHookInit,
    (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpTestHookInitialize,
    0LL,
    0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return RtlpQueryPhysicalMemoryPolicy(a3);
    return 3221225485LL;
  }
  v12 = a1 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( a4 == 4 )
        return RtlpQueryDiskSpeedPolicy(a3);
      return 3221225485LL;
    }
    if ( v13 != 1 )
      return 3221225475LL;
    if ( a4 == 4 )
    {
      NtSystemRoot = RtlGetNtSystemRoot(v8, v7, v9, v10);
      return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot, a3);
    }
    return 3221225485LL;
  }
  if ( a4 != 4 )
    return 3221225485LL;
  if ( (RtlGetSuiteMask(v8) & 0x10000) != 0 )
    v19 = L"C:\\data\\programs\\windowsapps";
  else
    v19 = (const wchar_t *)RtlGetNtSystemRoot(v16, v15, v17, v18);
  return RtlpQueryDiskSpacePolicy(v19, a3);
}
