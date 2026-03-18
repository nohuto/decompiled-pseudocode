/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x1403C0E9C
 * Callers:
 *     IntpAllocateProcessorContext @ 0x140B01F80 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 */

char __fastcall IntPartGetProcessorEfficiencyClass(struct _PROCESSOR_NUMBER *a1)
{
  __int64 v1; // rax

  if ( (KiInterruptSteeringFlags & 0x10) != 0 )
    return 0;
  v1 = KiProcessorBlock[KeGetProcessorIndexFromNumber(a1)];
  if ( KeHeteroSystem )
    return *(_BYTE *)(v1 + 34056);
  else
    return *(_BYTE *)(v1 + 34059);
}
