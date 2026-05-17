/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x1800A0024
 * Callers:
 *     RtlpEcReadPolicyState @ 0x18009FF00 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x18000ACEC (RtlStringCchPrintfW.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1800A00E0 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1800A0244 (RtlpGetPersistedRegistryLocation.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int PersistedRegistryLocation; // ebx
  __int64 v9; // rbx
  wchar_t *StringRoutine; // rax
  __int64 v11; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1);
  if ( PersistedRegistryLocation >= 0 )
  {
    v9 = a3;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(2LL * a3);
    v11 = (__int64)StringRoutine;
    if ( StringRoutine )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(StringRoutine, v9, L"%s%s", 0LL, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v11, a5, a6);
      NtdllpFreeStringRoutine(v11);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)PersistedRegistryLocation;
}
