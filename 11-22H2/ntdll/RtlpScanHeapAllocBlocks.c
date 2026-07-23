/*
 * XREFs of RtlpScanHeapAllocBlocks @ 0x180103938
 * Callers:
 *     RtlpScanProcessVirtualMemory @ 0x180103B7C (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpGetBlockInfo @ 0x1801033A8 (RtlpGetBlockInfo.c)
 *     RtlpGetHeapBlock @ 0x1801033F4 (RtlpGetHeapBlock.c)
 */

char RtlpScanHeapAllocBlocks()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi
  __int64 v2; // rcx
  _QWORD *v3; // r14
  unsigned __int64 *v4; // rdi
  unsigned __int64 i; // rcx
  __int64 HeapBlock; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 *v9; // rcx
  __int64 j; // rdi
  __int64 BlockInfo; // rax
  int v12; // r9d
  __int64 v13; // rbx
  SIZE_T v14; // rax
  _DWORD *v15; // rsi
  char *v16; // r8
  unsigned __int8 *v17; // rbx
  int v18; // eax

  v0 = (__int64 *)RtlpBusyList;
  while ( v0 != &RtlpBusyList )
  {
    v1 = v0;
    v2 = v0[3];
    v3 = v0 + 2;
    v4 = (unsigned __int64 *)v0[2];
    v0 = (__int64 *)*v0;
    for ( i = (unsigned __int64)v4 + v2; (unsigned __int64)(v4 + 1) <= i; i = *v3 + v1[3] )
    {
      HeapBlock = RtlpGetHeapBlock(*v4);
      if ( HeapBlock )
      {
        if ( !*(_DWORD *)(HeapBlock + 32) )
        {
          v7 = *(_QWORD *)HeapBlock;
          if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock
            || (v8 = *(_QWORD **)(HeapBlock + 8), *v8 != HeapBlock)
            || (*v8 = v7,
                *(_QWORD *)(v7 + 8) = v8,
                v9 = (__int64 *)qword_180182F48,
                *(__int64 **)qword_180182F48 != &RtlpBusyList) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)HeapBlock = &RtlpBusyList;
          *(_QWORD *)(HeapBlock + 8) = v9;
          *v9 = HeapBlock;
          qword_180182F48 = HeapBlock;
        }
        ++*(_DWORD *)(HeapBlock + 32);
        if ( !*(_QWORD *)(HeapBlock + 16) )
          __debugbreak();
      }
      ++v4;
    }
  }
  for ( j = RtlpLeakList; (__int64 *)j != &RtlpLeakList; j = *(_QWORD *)j )
  {
    BlockInfo = RtlpGetBlockInfo((_QWORD *)RtlpProcessMemoryMap, *(_QWORD *)(j + 16));
    v13 = BlockInfo;
    if ( BlockInfo )
    {
      if ( *((_QWORD *)&xmmword_1801830C0 + 1) )
      {
        v14 = RtlSizeHeap(*(PVOID *)(BlockInfo + 8), 0, *(PVOID *)(j + 16));
        (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, SIZE_T, _DWORD, _QWORD))&xmmword_1801830C0 + 1))(
          0LL,
          *(_QWORD *)(v13 + 8),
          *(_QWORD *)(j + 16),
          v14,
          0,
          0LL);
      }
      else
      {
        if ( !v12 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
        }
        v15 = *(_DWORD **)(v13 + 8);
        v16 = *(char **)(j + 16);
        if ( v15[4] == -571548178 )
        {
          v17 = *(unsigned __int8 **)(j + 16);
        }
        else
        {
          v17 = (unsigned __int8 *)(v16 - 16);
          _m_prefetchw(v16 - 16);
          if ( *(v16 - 1) == 5 )
            v17 -= 16 * v17[14];
        }
        v18 = RtlSizeHeap(v15, 0, v16);
        DbgPrint("%p  %-16Ix  %Id", v17, (_DWORD)v15, v18);
        DbgPrint("\n");
      }
      ++RtlpLeaksCount;
    }
  }
  if ( *((_QWORD *)&xmmword_1801830C0 + 1) )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))&xmmword_1801830C0 + 1))(
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      0LL);
  return 1;
}
