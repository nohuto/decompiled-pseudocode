/*
 * XREFs of VfAvlInitializeTreeEx @ 0x140ABE450
 * Callers:
 *     VfAvlInitializeTree @ 0x1405D1CA0 (VfAvlInitializeTree.c)
 *     VfInitBootDriversLoaded @ 0x140B5A754 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14031E790 (RtlInitializeGenericTableAvl.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FEF0 (HalQueryMaximumProcessorCount.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall VfAvlInitializeTreeEx(
        _QWORD *TableContext,
        __int64 a2,
        int a3,
        char a4,
        PRTL_AVL_FREE_ROUTINE FreeRoutine)
{
  int v7; // r8d
  __int64 v8; // rax
  __int64 Pool2; // rax
  unsigned __int64 v10; // rbp
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *v11)(_RTL_AVL_TABLE *, PVOID, PVOID); // rsi
  __int64 v12; // rdi
  int v14; // ecx
  unsigned int MaximumProcessorCount; // ecx

  TableContext[1] = 0LL;
  *TableContext = a2;
  *((_BYTE *)TableContext + 28) = a4;
  if ( a3 || (a4 ? (v14 = 0) : (v14 = ViAvlInitialized), a3 = a4 != 0 ? 24 : 16, !v14) )
    v7 = a3 + 32;
  else
    v7 = 1;
  *((_DWORD *)TableContext + 8) = v7;
  if ( a2 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount < 0x40 )
    {
      v8 = 32LL;
      if ( MaximumProcessorCount < 0x20 )
      {
        *((_DWORD *)TableContext + 6) = 16;
        v8 = 16LL;
      }
      else
      {
        *((_DWORD *)TableContext + 6) = 32;
      }
    }
    else
    {
      *((_DWORD *)TableContext + 6) = 64;
      v8 = 64LL;
    }
  }
  else
  {
    *((_DWORD *)TableContext + 6) = 1;
    v8 = 1LL;
  }
  Pool2 = ExAllocatePool2(64LL, 192 * v8, 0x54416656u);
  TableContext[2] = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v10 = 0LL;
  if ( *((_DWORD *)TableContext + 6) )
  {
    v11 = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))ViAvlCompareNodeUseSessionId;
    if ( !a4 )
      v11 = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))ViAvlCompareNode;
    v12 = 0LL;
    do
    {
      *(_QWORD *)(TableContext[2] + v12 + 104) = 0LL;
      *(_DWORD *)(TableContext[2] + v12 + 128) = 0;
      *(_QWORD *)(TableContext[2] + v12 + 112) = 0LL;
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(v12 + TableContext[2]),
        v11,
        (PRTL_AVL_ALLOCATE_ROUTINE)ViAvlAllocateNode,
        FreeRoutine,
        TableContext);
      ++v10;
      v12 += 192LL;
    }
    while ( v10 < *((unsigned int *)TableContext + 6) );
  }
  return 0LL;
}
