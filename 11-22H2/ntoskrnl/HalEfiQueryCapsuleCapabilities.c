/*
 * XREFs of HalEfiQueryCapsuleCapabilities @ 0x14050CCEC
 * Callers:
 *     HalpQueryCapsuleCapabilities @ 0x140521380 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x14035E4B4 (HalpEfiDecrementEfiCall.c)
 *     HalpConvertEfiToNtStatus @ 0x14035E4DC (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14035E510 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x14035E538 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiQueryCapsuleCapabilities(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[7] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(&HalpEfiCapsuleCalls);
  HalpEfiStartRuntimeCode(0x80u);
  ((void (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[7])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFF7F);
  HalpEfiDecrementEfiCall(&HalpEfiCapsuleCalls);
  return HalpConvertEfiToNtStatus(v4);
}
