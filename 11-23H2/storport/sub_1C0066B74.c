/*
 * XREFs of sub_1C0066B74 @ 0x1C0066B74
 * Callers:
 *     sub_1C0065E24 @ 0x1C0065E24 (sub_1C0065E24.c)
 *     sub_1C0066298 @ 0x1C0066298 (sub_1C0066298.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C0066B74(__int64 a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  ULONG Length; // [rsp+88h] [rbp+10h] BYREF

  ProcNumber = 0;
  v2 = 0x80000000;
  memset_0(&Information, 0, sizeof(Information));
  v3 = *(_DWORD **)(a1 + 48);
  Length = 80;
  if ( (v3[226] > 1u || v3[227] != 1)
    && KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 284) * v3[228], &ProcNumber) >= 0
    && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
  {
    return Information.NumaNode.NodeNumber;
  }
  return v2;
}
