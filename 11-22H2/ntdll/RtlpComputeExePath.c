/*
 * XREFs of RtlpComputeExePath @ 0x18006A1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  void *v3; // rcx
  __int64 v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v3 = &unk_180137958;
  if ( !a1 )
    v3 = &unk_180137930;
  v4 = RtlpComputePath(v3, 5 - (unsigned int)(a1 != 0), 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 116) = 0;
  }
  return v4;
}
