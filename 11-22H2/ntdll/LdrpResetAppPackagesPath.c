/*
 * XREFs of LdrpResetAppPackagesPath @ 0x18009E220
 * Callers:
 *     LdrUpdatePackageSearchPath @ 0x180083E80 (LdrUpdatePackageSearchPath.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 */

__int64 LdrpResetAppPackagesPath()
{
  void *v0; // rbx

  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v0 = (void *)*((_QWORD *)&LdrpAppPackagesPath + 1);
    ++LdrpAppPackagesPathVersion;
    *((_QWORD *)&LdrpAppPackagesPath + 1) = 0LL;
    LODWORD(LdrpAppPackagesPath) = 0;
  }
  else
  {
    v0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( v0 )
    NtdllpFreeStringRoutine(v0);
  return 0LL;
}
