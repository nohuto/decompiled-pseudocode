/*
 * XREFs of TopologyPUDynRangeCompressor @ 0x1C002D150
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x1C002EF24 (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPUDynRangeCompressor(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  NTSTATUS ProcessControlRange; // ebx
  __int64 Pool2; // rax
  void *v8; // rbp
  __int64 v9; // r15

  *(_DWORD *)(a3 + 76) = 22;
  v3 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_DYN_RANGE_COMPRESSOR;
  ProcessControlRange = -1073741670;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_DYN_RANGE_COMPRESSOR;
  if ( (*(_DWORD *)(a2 + 76) & 0x3E) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 120LL, 1096972357LL);
    v8 = (void *)Pool2;
    if ( Pool2 )
    {
      if ( (v9 = Pool2 + 20, (*(_DWORD *)(a2 + 76) & 2) != 0)
        && (ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 2, 2, 0x10000, v9), ProcessControlRange < 0)
        || (*(_DWORD *)(a2 + 76) & 4) != 0
        && (ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 3, 2, 0x10000, v9 + 20), ProcessControlRange < 0)
        || (*(_DWORD *)(a2 + 76) & 8) != 0
        && (ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 4, 2, 0x10000, v9 + 40), ProcessControlRange < 0)
        || (*(_DWORD *)(a2 + 76) & 0x10) != 0
        && (ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 5, 1, 1, v9 + 60), ProcessControlRange < 0)
        || (*(_DWORD *)(a2 + 76) & 0x20) != 0
        && (ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 6, 1, 1, v9 + 80), ProcessControlRange < 0)
        || (ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v8, ExFreePool),
            ProcessControlRange < 0) )
      {
        ExFreePool(v8);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessControlRange;
}
