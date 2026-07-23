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
  char *v0; // rbx
  NTSTATUS VirtualMemory; // edi
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int64 i; // rax
  __int64 HeapBlock; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 *v9; // rcx
  _BYTE MemoryInformation[24]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-50h]
  int v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+54h] [rbp-44h]

  v0 = 0LL;
  VirtualMemory = 0;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v0,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory >= 0 )
    {
      if ( (MemoryInformation[16] & 0xCC) != 0
        && (v13 & 0x1000) != 0
        && (v14 & 0x100) == 0
        && !RtlpGetMemoryFlag((_QWORD *)RtlpProcessMemoryMap, (unsigned __int64)v0) )
      {
        v2 = (unsigned __int64 *)v0;
        v3 = v12 >> 3;
        v4 = 0LL;
        for ( i = 0LL; i < v3; i = v4 )
        {
          HeapBlock = RtlpGetHeapBlock(*v2);
          if ( HeapBlock )
          {
            if ( !*(_QWORD *)(HeapBlock + 16) )
              __debugbreak();
            if ( !*(_DWORD *)(HeapBlock + 32) )
            {
              v7 = *(_QWORD *)HeapBlock;
              v8 = *(_QWORD **)(HeapBlock + 8);
              if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock
                || *v8 != HeapBlock
                || (*v8 = v7,
                    *(_QWORD *)(v7 + 8) = v8,
                    v9 = (__int64 *)qword_180185FF8,
                    *(__int64 **)qword_180185FF8 != &RtlpBusyList) )
              {
                __fastfail(3u);
              }
              *(_QWORD *)HeapBlock = &RtlpBusyList;
              *(_QWORD *)(HeapBlock + 8) = v9;
              *v9 = HeapBlock;
              qword_180185FF8 = HeapBlock;
            }
            ++*(_DWORD *)(HeapBlock + 32);
          }
          ++v2;
          ++v4;
        }
      }
      v0 += v12;
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}
