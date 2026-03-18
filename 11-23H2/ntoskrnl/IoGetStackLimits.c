/*
 * XREFs of IoGetStackLimits @ 0x14022E930
 * Callers:
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406043F8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1406F4140 (EtwpWriteUserEvent.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14082B418 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B268 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A698 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96D48 (HalpCheckLowMemoryPreSleep.c)
 *     ViDeadlockCheckStackLimits @ 0x140AD8D0C (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14022E960 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
