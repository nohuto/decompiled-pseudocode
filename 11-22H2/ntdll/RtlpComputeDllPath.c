/*
 * XREFs of RtlpComputeDllPath @ 0x18006A3B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006ABA8 (RtlpLookupCurDirSetting.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int64 EnvironmentVersion; // rdi
  int v7; // ebx
  char *v8; // rcx
  __int64 v9; // rbx

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  EnvironmentVersion = ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, (unsigned __int64)ProcessParameters, a3, a4);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v8 = (char *)&unk_18013796C;
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v7 = dword_180185088;
  if ( !dword_180185088 )
    v7 = RtlpLookupCurDirSetting(L"\"$", 1LL, &dword_180185088);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, (unsigned __int64)ProcessParameters, a3, a4);
  v8 = (char *)&unk_180137930 + 20 * v7;
LABEL_5:
  v9 = RtlpComputePath(v8, 5LL, a1);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 88) = EnvironmentVersion;
    *(_BYTE *)(v9 + 116) = 0;
  }
  return v9;
}
