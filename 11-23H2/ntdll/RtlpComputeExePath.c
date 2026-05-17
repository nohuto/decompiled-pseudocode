/*
 * XREFs of RtlpComputeExePath @ 0x18006A1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeExePath(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int64 EnvironmentVersion; // rdi
  void *v7; // rcx
  __int64 v8; // rbx

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  EnvironmentVersion = ProcessParameters->EnvironmentVersion;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, (unsigned __int64)ProcessParameters, a3, a4);
  v7 = &unk_180139858;
  if ( !a1 )
    v7 = &unk_180139830;
  v8 = RtlpComputePath(v7, 5 - (unsigned int)(a1 != 0), 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 88) = EnvironmentVersion;
    *(_BYTE *)(v8 + 116) = 0;
  }
  return v8;
}
