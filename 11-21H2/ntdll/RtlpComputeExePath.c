/*
 * XREFs of RtlpComputeExePath @ 0x18008BC10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 */

int *__fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  _DWORD *v3; // rcx
  int *v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v3 = &unk_1801360A8;
  if ( !a1 )
    v3 = dword_180136080;
  v4 = RtlpComputePath(v3, 5 - (unsigned int)(a1 != 0), 0LL, 0);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v4 )
  {
    *((_QWORD *)v4 + 11) = EnvironmentVersion;
    *((_BYTE *)v4 + 116) = 0;
  }
  return v4;
}
