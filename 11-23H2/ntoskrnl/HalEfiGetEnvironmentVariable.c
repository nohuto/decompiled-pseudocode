/*
 * XREFs of HalEfiGetEnvironmentVariable @ 0x14035EC0C
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x14035EAC0 (HalGetEnvironmentVariableEx.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x14035ECA4 (HalpEfiDecrementEfiCall.c)
 *     HalpConvertEfiToNtStatus @ 0x14035ECCC (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14035ED00 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x14035ED28 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiGetEnvironmentVariable(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax
  KPCR *Pcr; // rdx
  __int64 v6; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[3] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(&HalpEfiVariableCalls);
  HalpEfiStartRuntimeCode(8LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[3])(a1, v3, v2);
  Pcr = KeGetPcr();
  _InterlockedAnd((volatile signed __int32 *)&Pcr->HalReserved[8], 0xFFFFFFF7);
  HalpEfiDecrementEfiCall(&HalpEfiVariableCalls, Pcr, v4);
  return HalpConvertEfiToNtStatus(v6);
}
