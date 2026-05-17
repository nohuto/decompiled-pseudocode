/*
 * XREFs of RtlpComputeSearchPath @ 0x18006A100
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006AB88 (RtlpLookupCurDirSetting.c)
 */

__int64 __fastcall RtlpComputeSearchPath(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  __int64 v6; // rbx

  v4 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v4 = 0;
    }
    else
    {
      v4 = dword_18018816C;
      if ( !dword_18018816C )
        v4 = RtlpLookupCurDirSetting(L"*,", 0LL, &dword_18018816C);
    }
  }
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, a2, a3, a4);
  v6 = RtlpComputePath((char *)&unk_180139830 + 20 * v4, 5LL, 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 88) = EnvironmentVersion;
    *(_BYTE *)(v6 + 116) = 0;
  }
  return v6;
}
