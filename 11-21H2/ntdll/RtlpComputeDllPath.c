/*
 * XREFs of RtlpComputeDllPath @ 0x180032AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x180084E88 (RtlpLookupCurDirSetting.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  char *v3; // rcx
  int v4; // ebx
  __int64 v5; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v3 = (char *)&unk_1801360BC;
      goto LABEL_8;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v4 = dword_18017AE28;
  if ( !dword_18017AE28 )
    v4 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_18012CDC0);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v3 = (char *)&unk_180136080 + 20 * v4;
LABEL_8:
  v5 = RtlpComputePath(v3, 5LL, a1);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 88) = EnvironmentVersion;
    *(_BYTE *)(v5 + 116) = 0;
  }
  return v5;
}
