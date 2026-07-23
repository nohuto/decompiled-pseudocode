/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x18009FFE4
 * Callers:
 *     RtlpEcReadPolicyState @ 0x18009FEC0 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x18000ACEC (RtlStringCchPrintfW.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1800A00A0 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1800A0204 (RtlpGetPersistedRegistryLocation.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(const WCHAR *a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  int PersistedRegistryLocation; // ebx
  __int64 v7; // rbx
  wchar_t *StringRoutine; // rax
  WCHAR *v9; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1, a2);
  if ( PersistedRegistryLocation >= 0 )
  {
    v7 = a3;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(2LL * a3);
    v9 = StringRoutine;
    if ( StringRoutine )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(StringRoutine, v7, L"%s%s", 0LL, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v9);
      NtdllpFreeStringRoutine(v9);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)PersistedRegistryLocation;
}
