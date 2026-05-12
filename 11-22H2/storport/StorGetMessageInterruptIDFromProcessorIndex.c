/*
 * XREFs of StorGetMessageInterruptIDFromProcessorIndex @ 0x1C0045754
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1C000D988 (RaidNtStatusToStorStatus.c)
 *     RaidGetMessageNumberFromProcessorNumber @ 0x1C003B058 (RaidGetMessageNumberFromProcessorNumber.c)
 */

__int64 __fastcall StorGetMessageInterruptIDFromProcessorIndex(__int64 a1, ULONG a2, _DWORD *a3)
{
  NTSTATUS ProcessorNumberFromIndex; // eax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( a2 == -1 )
    return 3238002694LL;
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(a2, &ProcNumber);
  if ( ProcessorNumberFromIndex >= 0 )
    return RaidGetMessageNumberFromProcessorNumber(a1, &ProcNumber.Group, a3);
  else
    return RaidNtStatusToStorStatus(ProcessorNumberFromIndex);
}
