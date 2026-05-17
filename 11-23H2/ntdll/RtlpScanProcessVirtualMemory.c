/*
 * XREFs of RtlpScanProcessVirtualMemory @ 0x180104F8C
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180051930 (RtlDetectHeapLeaks.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     RtlpGetHeapBlock @ 0x180104804 (RtlpGetHeapBlock.c)
 *     RtlpGetMemoryFlag @ 0x1801048A0 (RtlpGetMemoryFlag.c)
 *     RtlpScanHeapAllocBlocks @ 0x180104D48 (RtlpScanHeapAllocBlocks.c)
 */

char RtlpScanProcessVirtualMemory()
{
  unsigned __int64 v0; // rbx
  int VirtualMemory; // edi
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 i; // rax
  __int64 HeapBlock; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 *v8; // rcx
  char v10; // [rsp+40h] [rbp-58h]
  unsigned __int64 v11; // [rsp+48h] [rbp-50h]
  __int16 v12; // [rsp+50h] [rbp-48h]
  __int16 v13; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory >= 0 )
    {
      if ( (v10 & 0xCC) != 0
        && (v12 & 0x1000) != 0
        && (v13 & 0x100) == 0
        && !RtlpGetMemoryFlag((_QWORD *)RtlpProcessMemoryMap, v0) )
      {
        v2 = (unsigned __int64 *)v0;
        v3 = 0LL;
        for ( i = 0LL; i < v11 >> 3; i = v3 )
        {
          HeapBlock = RtlpGetHeapBlock(*v2);
          if ( HeapBlock )
          {
            if ( !*(_QWORD *)(HeapBlock + 16) )
              __debugbreak();
            if ( !*(_DWORD *)(HeapBlock + 32) )
            {
              v6 = *(_QWORD *)HeapBlock;
              v7 = *(_QWORD **)(HeapBlock + 8);
              if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock
                || *v7 != HeapBlock
                || (*v7 = v6,
                    *(_QWORD *)(v6 + 8) = v7,
                    v8 = (__int64 *)qword_180185FF8,
                    *(__int64 **)qword_180185FF8 != &RtlpBusyList) )
              {
                __fastfail(3u);
              }
              *(_QWORD *)HeapBlock = &RtlpBusyList;
              *(_QWORD *)(HeapBlock + 8) = v8;
              *v8 = HeapBlock;
              qword_180185FF8 = HeapBlock;
            }
            ++*(_DWORD *)(HeapBlock + 32);
          }
          ++v2;
          ++v3;
        }
      }
      v0 += v11;
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}
