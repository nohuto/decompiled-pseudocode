/*
 * XREFs of HalEfiResetSystem @ 0x14050CE00
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140506BCC (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140506D54 (HalpShutdown.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x14035E4B4 (HalpEfiDecrementEfiCall.c)
 *     HalpEfiIncrementEfiCall @ 0x14035E510 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x14035E538 (HalpEfiStartRuntimeCode.c)
 */

__int64 HalEfiResetSystem()
{
  __int64 result; // rax
  unsigned int v1; // r10d
  __int16 v2; // [rsp+20h] [rbp-8h]

  result = (__int64)HalEfiRuntimeServicesTable;
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[2] )
  {
    _disable();
    HalpEfiIncrementEfiCall(&HalpEfiTimeWrites);
    HalpEfiIncrementEfiCall(&HalpEfiVariableWrites);
    HalpEfiStartRuntimeCode(4u);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalEfiRuntimeServicesTable[2])(v1, 0LL, 0LL, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFB);
    HalpEfiDecrementEfiCall(&HalpEfiVariableWrites);
    HalpEfiDecrementEfiCall(&HalpEfiTimeWrites);
    result = 512LL;
    if ( (v2 & 0x200) != 0 )
      _enable();
  }
  return result;
}
