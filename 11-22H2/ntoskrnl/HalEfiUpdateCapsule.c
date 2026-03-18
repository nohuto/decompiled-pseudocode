/*
 * XREFs of HalEfiUpdateCapsule @ 0x14050D18C
 * Callers:
 *     HalpUpdateCapsule @ 0x140521460 (HalpUpdateCapsule.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x14035E4B4 (HalpEfiDecrementEfiCall.c)
 *     HalpConvertEfiToNtStatus @ 0x14035E4DC (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14035E510 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x14035E538 (HalpEfiStartRuntimeCode.c)
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
