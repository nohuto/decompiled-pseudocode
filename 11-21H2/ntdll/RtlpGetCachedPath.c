/*
 * XREFs of RtlpGetCachedPath @ 0x18001DEB4
 * Callers:
 *     LdrpGetDllPath @ 0x18001DBFC (LdrpGetDllPath.c)
 *     RtlGetExePath @ 0x180088710 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x18008A4A0 (RtlGetSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpGetCachedPath(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdi

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, (unsigned __int64)a2, 0LL, 0LL);
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
  v14 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      v15 = 0LL;
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, v11, v12, v13);
      if ( *a1 == v9 )
      {
        *a1 = v14;
        ++*(_QWORD *)(v14 + 80);
        if ( v9 )
        {
          if ( (*(_QWORD *)(v9 + 80))-- == 1LL )
            v15 = v9;
        }
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v15 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15);
    }
    return v14;
  }
  return result;
}
