/*
 * XREFs of HviGetHardwareFeatures @ 0x1406158F0
 * Callers:
 *     HalpWdatDiscover @ 0x1403A4CC8 (HalpWdatDiscover.c)
 *     HvlGetSystemPasidCapabilities @ 0x140544B10 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140549624 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1405B6280 (HvipApertureDetectParameters.c)
 *     HvlQueryVsmProtectionInfo @ 0x1407E6948 (HvlQueryVsmProtectionInfo.c)
 *     HvlQueryDetailInfo @ 0x140941058 (HvlQueryDetailInfo.c)
 *     HalpIommuInitializeAll @ 0x140A90D8C (HalpIommuInitializeAll.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 *     HalpIommuInitDiscard @ 0x140B65050 (HalpIommuInitDiscard.c)
 *     HalpInterruptInitDiscard @ 0x140B74488 (HalpInterruptInitDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140615964 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v10 = 0LL;
  HviGetHypervisorVendorAndMaxFunction(&v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( (unsigned int)v10 < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
