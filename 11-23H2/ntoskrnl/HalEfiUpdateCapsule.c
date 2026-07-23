/*
 * XREFs of HalEfiUpdateCapsule @ 0x14050DA6C
 * Callers:
 *     HalpUpdateCapsule @ 0x1405218F0 (HalpUpdateCapsule.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x14035ECA4 (HalpEfiDecrementEfiCall.c)
 *     HalpConvertEfiToNtStatus @ 0x14035ECCC (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14035ED00 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x14035ED28 (HalpEfiStartRuntimeCode.c)
 */

__int64 HalEfiUpdateCapsule()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[6] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(&HalpEfiCapsuleCalls);
  HalpEfiIncrementEfiCall(&HalpEfiCapsuleWrites);
  HalpEfiStartRuntimeCode(0x40u);
  ((void (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[6])(v2, v1, v0);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFBF);
  HalpEfiDecrementEfiCall(&HalpEfiCapsuleWrites);
  HalpEfiDecrementEfiCall(&HalpEfiCapsuleCalls);
  return HalpConvertEfiToNtStatus(v3);
}
