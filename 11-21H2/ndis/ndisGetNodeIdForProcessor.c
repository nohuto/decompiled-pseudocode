/*
 * XREFs of ndisGetNodeIdForProcessor @ 0x1C01144E4
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C0114288 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisGetNodeIdForProcessor(ULONG ProcIndex)
{
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  ULONG Length; // [rsp+88h] [rbp+10h] BYREF

  if ( ProcIndex >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 0LL;
  ProcNumber = 0;
  if ( KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber) < 0 )
    return 0LL;
  memset(&Information, 0, sizeof(Information));
  Length = 80;
  if ( KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) < 0 )
    return 0LL;
  else
    return Information.NumaNode.NodeNumber;
}
