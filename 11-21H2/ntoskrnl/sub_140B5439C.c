/*
 * XREFs of sub_140B5439C @ 0x140B5439C
 * Callers:
 *     sub_140B1CC30 @ 0x140B1CC30 (sub_140B1CC30.c)
 * Callees:
 *     ZwManagePartition @ 0x14041DA60 (ZwManagePartition.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140B5439C(HANDLE TargetHandle, unsigned int a2, __int64 *a3, char a4)
{
  __int64 v6; // rsi
  int *PoolWithTag; // rax
  int *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rax

  v6 = a2;
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 16 * (a2 + 3LL), 0x4D72734Bu);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 9;
    v12 = *PoolWithTag;
    if ( a4 )
      v12 = 13;
    v10[1] = a2;
    *v10 = v12;
    v13 = v10 + 12;
    if ( a2 )
    {
      do
      {
        v14 = *a3;
        a3 += 2;
        *v13 = v14;
        v13 += 2;
        *(v13 - 1) = *(a3 - 1);
        --v6;
      }
      while ( v6 );
    }
    v11 = ZwManagePartition(TargetHandle, 0LL, SystemMemoryPartitionInitialAddMemory, v10, 0x40u);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
