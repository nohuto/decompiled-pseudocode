/*
 * XREFs of IopAllocateRelationList @ 0x140767538
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140767F88 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x140767594 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x140767600 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x140767730 (PnpAllocateCriticalMemory.c)
 */

_BYTE *__fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = (_BYTE *)PnpAllocateCriticalMemory(a1, 256LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      CriticalMemory[8] = 0;
    }
    else
    {
      IopFreeRelationList(CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
