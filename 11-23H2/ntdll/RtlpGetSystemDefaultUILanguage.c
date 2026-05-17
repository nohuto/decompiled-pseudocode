/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x180012D30
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180013A08 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013DA0 (LdrpMergeLangFallbackLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x180070640 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008E5F8 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A2FE0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A39E0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edi
  __int16 v5; // ax
  int v7; // eax
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v8 = 0;
  v9 = 0LL;
  v4 = 0;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2 && (v7 = RtlpCreateProcessRegistryInfo(&v9), v2 = v9, v4 = v7, v7 < 0)
      || !v2
      || (v5 = *(_WORD *)(v2 + 4)) == 0 )
    {
      v4 = NtQueryInstallUILanguage(&v8);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v2 )
        {
          RtlpLoadInstallLanguageFallback(v2, v2 + 6, v2 + 8);
          *(_WORD *)(v2 + 4) = v8;
        }
      }
      v5 = v8;
    }
    *a1 = v5;
    return (unsigned int)v4;
  }
  return 3221225485LL;
}
