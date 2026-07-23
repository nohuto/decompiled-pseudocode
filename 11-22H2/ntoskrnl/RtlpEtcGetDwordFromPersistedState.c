/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x140411118
 * Callers:
 *     RtlpEcReadPolicyState @ 0x140410FF0 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14022A92C (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1404111D4 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411338 (RtlpGetPersistedRegistryLocation.c)
 *     ExpAllocateStringRoutine @ 0x1407C7520 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(const WCHAR *a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  NTSTATUS PersistedRegistryLocation; // ebx
  size_t v7; // rbx
  wchar_t *StringRoutine; // rax
  WCHAR *v9; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1, a2);
  if ( PersistedRegistryLocation >= 0 )
  {
    v7 = a3;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(2LL * a3);
    v9 = StringRoutine;
    if ( StringRoutine )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(StringRoutine, v7, L"%s%s", 0LL, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v9);
      ExFreePool(v9);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)PersistedRegistryLocation;
}
