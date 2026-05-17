/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x18004DCB0
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x18004C2E4 (RtlpAddNeutralsToMergedList.c)
 *     RtlpQueryDefaultUILanguage @ 0x18004D9B0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180093130 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A6180 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A6B40 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v6; // edi
  __int16 v7; // ax
  int v9; // eax
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  v10 = 0;
  v11 = 0LL;
  v6 = 0;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2 && (v9 = RtlpCreateProcessRegistryInfo(&v11), v4 = v11, v6 = v9, v9 < 0)
      || !v4
      || (v7 = *(_WORD *)(v4 + 4)) == 0 )
    {
      v6 = NtQueryInstallUILanguage(&v10, a2, a3, a4);
      if ( v6 < 0 )
        return (unsigned int)v6;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v4 )
        {
          RtlpLoadInstallLanguageFallback(v4, v4 + 6, v4 + 8);
          *(_WORD *)(v4 + 4) = v10;
        }
      }
      v7 = v10;
    }
    *a1 = v7;
    return (unsigned int)v6;
  }
  return 3221225485LL;
}
