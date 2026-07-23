/*
 * XREFs of KxTryToAcquireSpinLock @ 0x14020D8E4
 * Callers:
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 *     EtwpTraceStackKey @ 0x140469970 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14046AAE8 (EtwpCovSampTryAcquireBufferLock.c)
 *     HalpDmaGetNextTranslatedDevice @ 0x140500374 (HalpDmaGetNextTranslatedDevice.c)
 *     HalpHandleMachineCheck @ 0x140503430 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x140504068 (HalpMceHandlerCore.c)
 *     PopFxComponentRelationsCleanup @ 0x140589E04 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x14058A2C8 (PopFxDeviceRelationsCleanup.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x1405E6720 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 *     EtwpGetCrimsonStackKey @ 0x14060215C (EtwpGetCrimsonStackKey.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x1404608EC (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented();
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
