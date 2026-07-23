/*
 * XREFs of IopAllocateRelationList @ 0x14086874C
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140867DF4 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140881708 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1408832B0 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     IopFreeRelationList @ 0x1408686FC (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1408687A8 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x140868894 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  __int64 CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = PnpAllocateCriticalMemory(a1, 256LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      *(_BYTE *)(CriticalMemory + 8) = 0;
    }
    else
    {
      IopFreeRelationList((_QWORD *)CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
