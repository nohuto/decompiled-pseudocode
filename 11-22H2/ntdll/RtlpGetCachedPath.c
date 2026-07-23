/*
 * XREFs of RtlpGetCachedPath @ 0x180031F30
 * Callers:
 *     LdrpGetDllPath @ 0x180031CCC (LdrpGetDllPath.c)
 *     RtlGetExePath @ 0x1800837E0 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x180086250 (RtlGetSearchPath.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpGetCachedPath(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rsi
  void *v12; // rdi

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v9 = *a1;
    if ( *a1
      && *(_QWORD *)(v9 + 96) == LdrpAppPackagesPathVersion
      && (*(_BYTE *)(v9 + 116) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  }
  result = a2(a3, a4);
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
      if ( *a1 == v9 )
      {
        *a1 = v11;
        ++*(_QWORD *)(v11 + 80);
        if ( v9 )
        {
          if ( (*(_QWORD *)(v9 + 80))-- == 1LL )
            v12 = (void *)v9;
        }
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v12 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
    return v11;
  }
  return result;
}
