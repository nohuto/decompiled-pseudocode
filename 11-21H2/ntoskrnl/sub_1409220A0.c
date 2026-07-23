/*
 * XREFs of sub_1409220A0 @ 0x1409220A0
 * Callers:
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409220A0(__int64 a1, unsigned int *a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r13d
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  char *PoolWithTag; // rax
  char *v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  int v11; // r12d
  unsigned int v12; // r14d
  unsigned int *v13; // rdi
  unsigned int v14; // ebp
  PVOID v15; // rax
  __int64 v17; // rbp
  PVOID *v18; // rdi

  v4 = *(_DWORD *)(a1 + 280) + 4096;
  v5 = a4;
  v6 = (v4 >> 20) + 1;
  if ( (v4 & 0xFFFFF) == 0 )
    v6 = v4 >> 20;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 24 * v6, 0x20204D43u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24 * v6);
    v10 = 0;
    v11 = 0;
    v12 = v4;
    if ( v6 )
    {
      v13 = (unsigned int *)(v8 + 16);
      while ( 1 )
      {
        v14 = 0x100000;
        if ( v12 < 0x100000 )
          v14 = v12;
        v15 = ExAllocatePoolWithTag(PagedPool, v14, 0x20204D43u);
        *((_QWORD *)v13 - 1) = v15;
        if ( !v15 )
          break;
        *(v13 - 4) = v10;
        v12 -= v14;
        *v13 = v14;
        v10 += v14;
        v13 += 6;
        if ( ++v11 >= v6 )
        {
          v5 = a4;
          goto LABEL_12;
        }
      }
      v17 = v6;
      v18 = (PVOID *)(v8 + 8);
      v9 = -1073741801;
      do
      {
        if ( *v18 )
        {
          ExFreePoolWithTag(*v18, 0);
          *v18 = 0LL;
        }
        v18 += 3;
        --v17;
      }
      while ( v17 );
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
LABEL_12:
      if ( v5 )
        *v5 = v4;
      *a2 = v6;
      v9 = 0;
      *a3 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
