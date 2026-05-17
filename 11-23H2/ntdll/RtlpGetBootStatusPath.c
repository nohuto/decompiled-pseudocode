/*
 * XREFs of RtlpGetBootStatusPath @ 0x1800FAD34
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800FA810 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlIsStateSeparationEnabled @ 0x18006FAA0 (RtlIsStateSeparationEnabled.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800FAD90 (RtlpGetBootStatusPathFromRegistry.c)
 */

char __fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  int BootStatusPathFromRegistry; // eax
  char v5; // bl
  const wchar_t *v6; // rcx

  BootStatusPathFromRegistry = RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( BootStatusPathFromRegistry < 0 )
  {
    LOBYTE(BootStatusPathFromRegistry) = RtlIsStateSeparationEnabled();
    v6 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !(_BYTE)BootStatusPathFromRegistry )
      v6 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v6;
  }
  else
  {
    v5 = 1;
  }
  *a2 = v5;
  return BootStatusPathFromRegistry;
}
