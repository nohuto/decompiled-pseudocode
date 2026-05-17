/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180019500
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18000AFE8 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BE08 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C778 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpWin32NtNameToNtPathName @ 0x180019394 (RtlpWin32NtNameToNtPathName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindKnownDll @ 0x18002C594 (LdrpFindKnownDll.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085244 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E4844 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E5180 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     RtlpHpOverrideGCInterval @ 0x1800FF848 (RtlpHpOverrideGCInterval.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801015CC (RtlpConstructCrossVmObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012D434 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, const void **a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *(unsigned __int16 *)a2;
  if ( !(_WORD)v2 )
    return 0LL;
  v4 = *a1;
  if ( (unsigned int)v4 + v2 <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, a2[1], *(unsigned __int16 *)a2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
