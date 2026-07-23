/*
 * XREFs of sub_1409DA3EC @ 0x1409DA3EC
 * Callers:
 *     sub_1409D8E00 @ 0x1409D8E00 (sub_1409D8E00.c)
 * Callees:
 *     MmPrefetchVirtualAddresses @ 0x1406EBFB0 (MmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409DA3EC(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v9; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (a3 + 2), 0x76506D56u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0;
    PoolWithTag[1] &= 0xFFFFFFF9;
    v9 = (_QWORD *)(((unsigned __int64)PoolWithTag + 39) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)PoolWithTag + 1) = -1LL;
    *((_QWORD *)PoolWithTag + 2) = a3;
    v10 = 16 * a3;
    *PoolWithTag = 1;
    *((_QWORD *)PoolWithTag + 3) = v9;
    if ( a1 < v10 + a1 )
    {
      v11 = a1 - (_QWORD)v9;
      v12 = ((unsigned __int64)(v10 - 1) >> 4) + 1;
      do
      {
        v13 = *a2++;
        *v9 = v13 << 12;
        v14 = *(_QWORD *)((char *)v9 + v11 + 8);
        v9 += 2;
        *(v9 - 1) = v14 << 12;
        --v12;
      }
      while ( v12 );
    }
    v8 = MmPrefetchVirtualAddresses(v7);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
