/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x180091338
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180092EB0 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC470 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006DCD0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006E5F4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *(_DWORD *)(g_RegInfo + 12) != MEMORY[0x7FFE03A4] )
  {
    v7 = 0LL;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&v7);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection(v2, v1, v3, v4);
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      if ( g_RegInfo && *(_DWORD *)(g_RegInfo + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v7);
      }
      else
      {
        v5 = v7;
        *(_QWORD *)(v7 + 104) = g_RegInfo;
        if ( g_RegInfo )
          *(_QWORD *)(v5 + 72) = *(_QWORD *)(g_RegInfo + 72);
        g_RegInfo = v5;
      }
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
