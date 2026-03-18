/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x140377F3C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140377DC8 (HalSocRequestConfigurationData.c)
 *     HalpIsPartitionCpuManager @ 0x140377EF8 (HalpIsPartitionCpuManager.c)
 *     HalpArtAvailable @ 0x140377FF0 (HalpArtAvailable.c)
 *     HalSocRequestApi @ 0x1403783EC (HalSocRequestApi.c)
 *     HalpHvIsFrequencyAvailable @ 0x14037975C (HalpHvIsFrequencyAvailable.c)
 *     HalpHvWatchdogDiscover @ 0x1403A43D0 (HalpHvWatchdogDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4AE8 (HalpWdatDiscover.c)
 *     HalpCmcStartPolling @ 0x1403B4968 (HalpCmcStartPolling.c)
 *     HalpHvIsX2ApicRecommended @ 0x14050B5D8 (HalpHvIsX2ApicRecommended.c)
 *     HalpIsHvIptSupported @ 0x14050B7E0 (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x14050B848 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x14081E570 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140934B30 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140A913E4 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x140377F7C (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

bool __fastcall HalpIsMicrosoftCompatibleHvLoaded(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( (unsigned __int8)HalpIsHvPresent(a1, a2) )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v2;
}
