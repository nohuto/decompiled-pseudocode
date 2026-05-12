/*
 * XREFs of StorGetPreferredNodeNumber @ 0x1C0059354
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00586F4 (RaAttemptHighWaterMarkIncrease.c)
 *     RaInitializeRaidResources @ 0x1C0058B7C (RaInitializeRaidResources.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall StorGetPreferredNodeNumber(__int64 a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  ULONG Length; // [rsp+88h] [rbp+10h] BYREF

  ProcNumber = 0;
  v2 = 0x80000000;
  memset(&Information, 0, sizeof(Information));
  v3 = *(_DWORD **)(a1 + 48);
  Length = 80;
  if ( (v3[210] > 1u || v3[211] != 1)
    && KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 284) * v3[212], &ProcNumber) >= 0
    && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
  {
    return Information.NumaNode.NodeNumber;
  }
  return v2;
}
