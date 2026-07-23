/*
 * XREFs of IoGetStackLimits @ 0x14022EA40
 * Callers:
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140604948 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14082B718 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B4A8 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A948 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96BB8 (HalpCheckLowMemoryPreSleep.c)
 *     ViDeadlockCheckStackLimits @ 0x140AD8CFC (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14022EA70 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
