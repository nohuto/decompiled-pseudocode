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

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // ebx
  char *v4; // rcx
  __int64 v5; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v4 = (char *)&unk_18013796C;
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_180185088;
  if ( !dword_180185088 )
    v3 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180131580);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = (char *)&unk_180137930 + 20 * v3;
LABEL_5:
  v5 = RtlpComputePath(v4, 5LL, a1);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 88) = EnvironmentVersion;
    *(_BYTE *)(v5 + 116) = 0;
  }
  return v5;
}
