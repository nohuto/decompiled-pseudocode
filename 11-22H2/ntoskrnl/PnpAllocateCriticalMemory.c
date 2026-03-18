/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140868B24
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x140868120 (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x140868264 (PnpResizeTargetDeviceBlock.c)
 *     PiEventBuildPdoList @ 0x1408684B8 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140868710 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x1408689DC (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140868A38 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x140868AA4 (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883540 (PnpQueuePendingSurpriseRemoval.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409718E4 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
