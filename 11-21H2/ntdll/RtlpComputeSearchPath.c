/*
 * XREFs of RtlpComputeSearchPath @ 0x180084DD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x180084E88 (RtlpLookupCurDirSetting.c)
 */

int *RtlpComputeSearchPath()
{
  int v0; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  int *v2; // rbx

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_18017AE2C;
      if ( !dword_18017AE2C )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_18012CDB0);
    }
  }
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v2 = RtlpComputePath(&dword_180136080[5 * v0], 5u, 0LL, 0);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v2 )
  {
    *((_QWORD *)v2 + 11) = EnvironmentVersion;
    *((_BYTE *)v2 + 116) = 0;
  }
  return v2;
}
