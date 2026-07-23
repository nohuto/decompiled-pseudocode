/*
 * XREFs of sub_14020A7D8 @ 0x14020A7D8
 * Callers:
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14020A7D8(PVOID **a1, _DWORD *a2, unsigned int a3)
{
  PVOID *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rsi
  char v9; // bl
  PVOID PoolWithTag; // rbp
  PVOID *v11; // rax
  unsigned int v12; // ebx
  PVOID *v14; // rbx
  __int64 v15; // r14
  unsigned int v16; // r13d
  __int64 v17; // rcx
  size_t v18; // rbx
  PVOID *v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // r13d
  PVOID v24; // rax
  PVOID *v25; // r14
  unsigned int NumberOfBytes; // [rsp+78h] [rbp+20h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, a3, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v8 = 1LL;
    v11 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x6F494D43u);
    v6 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = 0;
      v12 = 0;
      v11[1] = PoolWithTag;
      *((_DWORD *)v11 + 4) = a3;
      *a1 = v11;
      *a2 = 1;
      return v12;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_8:
  if ( v9 )
  {
    if ( v6 )
    {
      if ( (_DWORD)v8 )
      {
        v14 = v6 + 1;
        v15 = (unsigned int)v8;
        do
        {
          if ( *v14 )
          {
            ExFreePoolWithTag(*v14, 0);
            *v14 = 0LL;
          }
          v14 += 3;
          --v15;
        }
        while ( v15 );
      }
      ExFreePoolWithTag(v6, 0);
      v6 = 0LL;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (_DWORD)v7 == 9 )
      goto LABEL_28;
  }
  v16 = *((_DWORD *)qword_14003ABE8 + v7) << 12;
  NumberOfBytes = v16;
  v17 = a3 / v16 + 1;
  if ( !(a3 % v16) )
    v17 = a3 / v16;
  v8 = (unsigned int)v17;
  v18 = 24 * v17;
  v19 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24 * v17, 0x6F494D43u);
  v6 = v19;
  if ( !v19 )
  {
LABEL_28:
    v12 = -1073741801;
  }
  else
  {
    memset(v19, 0, v18);
    v20 = a3;
    v21 = 0LL;
    while ( (unsigned int)v21 < (unsigned int)v8 )
    {
      LODWORD(v6[3 * v21]) = 0;
      v22 = v20 - v16;
      v23 = 0;
      if ( v20 >= NumberOfBytes )
      {
        v20 = NumberOfBytes;
        v23 = v22;
      }
      LODWORD(v6[3 * v21 + 2]) = v20;
      v24 = ExAllocatePoolWithTag(PagedPoolCacheAligned, v20, 0x6F494D43u);
      v6[3 * v21 + 1] = v24;
      if ( !v24 )
      {
        v9 = 1;
        goto LABEL_8;
      }
      v20 = v23;
      v21 = (unsigned int)(v21 + 1);
      v16 = NumberOfBytes;
    }
    *a1 = v6;
    v6 = 0LL;
    v12 = 0;
    *a2 = v8;
  }
  if ( v6 )
  {
    if ( (_DWORD)v8 )
    {
      v25 = v6 + 1;
      do
      {
        if ( *v25 )
        {
          ExFreePoolWithTag(*v25, 0);
          *v25 = 0LL;
        }
        v25 += 3;
        --v8;
      }
      while ( v8 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  return v12;
}
