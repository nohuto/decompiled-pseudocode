/*
 * XREFs of KxTryToAcquireSpinLock @ 0x14020D8E4
 * Callers:
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 *     EtwpTraceStackKey @ 0x140469570 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14046A6E8 (EtwpCovSampTryAcquireBufferLock.c)
 *     HalpDmaGetNextTranslatedDevice @ 0x1404FFE24 (HalpDmaGetNextTranslatedDevice.c)
 *     HalpHandleMachineCheck @ 0x140502EE0 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x140503B18 (HalpMceHandlerCore.c)
 *     PopFxComponentRelationsCleanup @ 0x140589914 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140589DD8 (PopFxDeviceRelationsCleanup.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x1405E61B0 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C0C (EtwpGetCrimsonStackKey.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x1404604EC (KiTryToAcquireSpinLockInstrumented.c)
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
