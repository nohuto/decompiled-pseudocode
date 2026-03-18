/*
 * XREFs of PopFxReleaseDevice @ 0x140462D9C
 * Callers:
 *     PopAllocateIrp @ 0x14028F434 (PopAllocateIrp.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1409848B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140984B94 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x140985F50 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
