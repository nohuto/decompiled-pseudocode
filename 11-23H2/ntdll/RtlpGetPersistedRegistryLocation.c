/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x1800A0204
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x18009FFE4 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceID, PCWSTR DefaultPath, WCHAR **a3, _DWORD *a4)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS v9; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-28h] BYREF

  BufferLengthOut[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             SourceID,
                             L"TargetNtPath",
                             DefaultPath,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             BufferLengthOut);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut[0];
    TargetPath = (WCHAR *)NtdllpAllocateStringRoutine(BufferLengthOut[0]);
    if ( TargetPath )
    {
      v9 = RtlGetPersistedStateLocation(
             SourceID,
             L"TargetNtPath",
             DefaultPath,
             LocationTypeRegistry,
             TargetPath,
             BufferLengthIn,
             BufferLengthOut);
      if ( v9 < 0 )
      {
        NtdllpFreeStringRoutine(TargetPath);
      }
      else
      {
        *a3 = TargetPath;
        if ( a4 )
          *a4 = (BufferLengthOut[0] >> 1) - 1;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( PersistedStateLocation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
