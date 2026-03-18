/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140868654
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x140867C50 (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x140867D94 (PnpResizeTargetDeviceBlock.c)
 *     PiEventBuildPdoList @ 0x140867FE8 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140868240 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x14086850C (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140868568 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1408685D4 (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883070 (PnpQueuePendingSurpriseRemoval.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140971834 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
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
