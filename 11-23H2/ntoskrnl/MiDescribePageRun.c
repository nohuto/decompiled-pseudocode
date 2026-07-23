/*
 * XREFs of MiDescribePageRun @ 0x14037562C
 * Callers:
 *     MiCreateNodeLists @ 0x14081BC04 (MiCreateNodeLists.c)
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CEFC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiRestrictRangeToNode @ 0x1403758B4 (MiRestrictRangeToNode.c)
 *     MiPageToChannel @ 0x140375A10 (MiPageToChannel.c)
 */

__int64 __fastcall MiDescribePageRun(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR v4; // rbx
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax

  v3 = a2 + a3;
  v4 = a2;
  if ( a2 == a2 + a3 )
    return 1LL;
  while ( 1 )
  {
    v6 = MiRestrictRangeToNode(v4);
    result = (__int64)MiAllocatePool(64, 0x28uLL, 0x6F4E6D4Du);
    v8 = result;
    if ( !result )
      break;
    *(_QWORD *)(result + 16) = v4;
    *(_QWORD *)(result + 24) = v6;
    *(_DWORD *)(result + 36) = MiPageToChannel(v4);
    *(_DWORD *)(v8 + 32) = *((_DWORD *)MiSearchNumaNodeTable(v4) + 2);
    v9 = *(__int64 **)(a1 + 8);
    if ( *v9 != a1 )
      __fastfail(3u);
    *(_QWORD *)v8 = a1;
    v4 += v6;
    *(_QWORD *)(v8 + 8) = v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 8) = v8;
    ++*(_QWORD *)(a1 + 16);
    if ( v4 == v3 )
      return 1LL;
  }
  return result;
}
