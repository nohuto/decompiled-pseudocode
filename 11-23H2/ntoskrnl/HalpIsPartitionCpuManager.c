/*
 * XREFs of HalpIsPartitionCpuManager @ 0x140378098
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140377F68 (HalSocRequestConfigurationData.c)
 *     HalpInterruptRegisterController @ 0x140378884 (HalpInterruptRegisterController.c)
 *     HalMcFinishMicrocode @ 0x1403B0FE4 (HalMcFinishMicrocode.c)
 *     HalpCmcStartPolling @ 0x1403B4B48 (HalpCmcStartPolling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B68E0 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpMcUpdateInitialize @ 0x14081E3E4 (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403780DC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall HalpIsPartitionCpuManager(__int64 a1, __int64 a2)
{
  char v2; // r10

  if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v2;
}
