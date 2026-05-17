/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x1800A0244
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x1800A0024 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceString, _WORD *a2, _QWORD *a3, _DWORD *a4)
{
  int PersistedStateLocation; // eax
  int v9; // ebx
  unsigned int v10; // ebx
  void *StringRoutine; // rdi
  unsigned int v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v13[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, L"TargetNtPath", a2, 0, 0LL, 0, v13);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v10 = v13[0];
    StringRoutine = (void *)NtdllpAllocateStringRoutine(v13[0]);
    if ( StringRoutine )
    {
      v9 = RtlGetPersistedStateLocation(SourceString, L"TargetNtPath", a2, 0, StringRoutine, v10, v13);
      if ( v9 < 0 )
      {
        NtdllpFreeStringRoutine((__int64)StringRoutine);
      }
      else
      {
        *a3 = StringRoutine;
        if ( a4 )
          *a4 = (v13[0] >> 1) - 1;
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
