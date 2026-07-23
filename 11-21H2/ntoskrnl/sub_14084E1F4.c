/*
 * XREFs of sub_14084E1F4 @ 0x14084E1F4
 * Callers:
 *     sub_14084E03C @ 0x14084E03C (sub_14084E03C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14084E1F4(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // r14
  int v11; // r12d
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  size_t v14; // r15
  char *PoolWithTag; // rax
  char *v16; // rbp
  __int64 v17; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v4 = *(unsigned int *)(a1 + 64);
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8LL * v6);
      if ( v8 == a2 )
        break;
      if ( !v8 )
      {
        *(_QWORD *)(v7 + 8LL * v6) = a2;
        goto LABEL_6;
      }
      if ( ++v6 >= (unsigned int)v4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( v6 == (_DWORD)v4 )
    {
      v10 = 8 * v4;
      v17 = *(_QWORD *)(a1 + 72);
      v11 = v4 + 4;
      v12 = -1;
      if ( (unsigned __int64)(8 * v4) <= 0xFFFFFFFF )
        v12 = 8 * v4;
      v13 = 8LL * (unsigned int)(v4 + 4);
      if ( v13 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v14 = (unsigned int)v13;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x70696D57u);
      v16 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, v14);
      memmove(v16, *(const void **)(a1 + 72), v12);
      if ( v17 != a1 + 80 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
      *(_QWORD *)(a1 + 72) = v16;
      *(_QWORD *)&v16[v10] = a2;
      *(_DWORD *)(a1 + 64) = v11;
    }
LABEL_6:
    sub_140784160(a2);
  }
  return v2;
}
