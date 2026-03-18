/*
 * XREFs of KiGetCpuVendor @ 0x140A888A0
 * Callers:
 *     HvlpProcessIommu @ 0x14036A5FC (HvlpProcessIommu.c)
 *     KiGetIptInfo @ 0x14039BE40 (KiGetIptInfo.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409E2C94 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E2FC4 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E4318 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E462C (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409E4CAC (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiGetProcessorSignature @ 0x140A8B9F8 (KiGetProcessorSignature.c)
 *     KiIsNXSupported @ 0x140A91F98 (KiIsNXSupported.c)
 *     PopIsMktmeEnabled @ 0x140AA357C (PopIsMktmeEnabled.c)
 *     KiInitializeNxSupportDiscard @ 0x140B7313C (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     strncmp @ 0x1403D8E90 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[16]; // [rsp+20h] [rbp-20h] BYREF

  _RAX = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)&Str1[4] = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&Str1[12] = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = *(_DWORD *)&Str1[12];
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
  {
    if ( strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
      return strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) == 0 ? 3 : 0;
    return 1LL;
  }
  return 3LL;
}
