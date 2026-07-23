/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140868894
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x140867E90 (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x140867FD4 (PnpResizeTargetDeviceBlock.c)
 *     PiEventBuildPdoList @ 0x140868228 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140868480 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x14086874C (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1408687A8 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x140868814 (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1408832B0 (PnpQueuePendingSurpriseRemoval.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140971A34 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateCriticalMemory(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  result = ExAllocatePool2(a2, a3, a4);
  if ( !result && a1 )
  {
    do
    {
      if ( a1 == 4 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      result = ExAllocatePool2(a2, a3, a4);
    }
    while ( !result );
  }
  return result;
}
