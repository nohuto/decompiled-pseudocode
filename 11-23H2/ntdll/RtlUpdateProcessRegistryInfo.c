/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x18008AC4C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008E420 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A534 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x180011A44 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18008ABA0 (RtlpMuiFreeLangRegistryInfo.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *(_DWORD *)(g_RegInfo + 12) != MEMORY[0x7FFE03A4] )
  {
    v3 = 0LL;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&v3);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      if ( g_RegInfo && *(_DWORD *)(g_RegInfo + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v3);
      }
      else
      {
        v1 = v3;
        *(_QWORD *)(v3 + 104) = g_RegInfo;
        if ( g_RegInfo )
          *(_QWORD *)(v1 + 72) = *(_QWORD *)(g_RegInfo + 72);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
