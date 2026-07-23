/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x18008A44C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008DC20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A754 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x180011C54 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18008A3A0 (RtlpMuiFreeLangRegistryInfo.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  _QWORD *v1; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *((_DWORD *)g_RegInfo + 3) != MEMORY[0x7FFE03A4] )
  {
    BaseAddress = 0LL;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&BaseAddress);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      if ( g_RegInfo && *((_DWORD *)g_RegInfo + 3) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(BaseAddress);
      }
      else
      {
        v1 = BaseAddress;
        *((_QWORD *)BaseAddress + 13) = g_RegInfo;
        if ( g_RegInfo )
          v1[9] = *((_QWORD *)g_RegInfo + 9);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
