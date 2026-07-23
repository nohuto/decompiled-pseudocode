/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1403780DC
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140377F68 (HalSocRequestConfigurationData.c)
 *     HalpIsPartitionCpuManager @ 0x140378098 (HalpIsPartitionCpuManager.c)
 *     HalpArtAvailable @ 0x140378190 (HalpArtAvailable.c)
 *     HalSocRequestApi @ 0x14037858C (HalSocRequestApi.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403798FC (HalpHvIsFrequencyAvailable.c)
 *     HalpHvWatchdogDiscover @ 0x1403A45B0 (HalpHvWatchdogDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4CC8 (HalpWdatDiscover.c)
 *     HalpCmcStartPolling @ 0x1403B4B48 (HalpCmcStartPolling.c)
 *     HalpHvIsX2ApicRecommended @ 0x14050BB28 (HalpHvIsX2ApicRecommended.c)
 *     HalpIsHvIptSupported @ 0x14050BD30 (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x14050BD98 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x14081E840 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140934D30 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140A91264 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x14037811C (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
