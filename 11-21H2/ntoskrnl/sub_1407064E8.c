/*
 * XREFs of sub_1407064E8 @ 0x1407064E8
 * Callers:
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140700D70 @ 0x140700D70 (sub_140700D70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407064E8(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Size, __int64 *a7)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // r12
  _QWORD *PoolWithTag; // rax
  size_t v16; // r8
  char *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  const void *v20; // rdx
  char *v21; // rsi
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h] BYREF
  int v25; // [rsp+94h] [rbp+1Ch]

  v25 = HIDWORD(a3);
  v7 = (unsigned int)a4;
  v24 = 0;
  v23 = 0LL;
  v9 = 0LL;
  v10 = sub_140700D70(0LL, a1, a3, a4, 0LL, &v23, (int *)&v24);
  if ( v10 >= 0 )
  {
    v11 = v24;
    if ( (unsigned int)v7 <= 1 )
      v12 = 0LL;
    else
      v12 = (((unsigned __int64)((unsigned int)v7 * v24) + 63) >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    v13 = v23;
    v14 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    Size = v12 + 4 * v7 + v14;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size + 64, 0x4C617652u);
    v9 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v16 = Size;
      PoolWithTag[3] = v13;
      v17 = (char *)(PoolWithTag + 8);
      *PoolWithTag = v11;
      *((_DWORD *)PoolWithTag + 2) = v7;
      PoolWithTag[2] = PoolWithTag + 8;
      memset(PoolWithTag + 8, 0, v16);
      v20 = Src;
      v21 = &v17[v14];
      if ( Src )
      {
        *(_QWORD *)(v9 + 48) = v21;
        memmove(v21, v20, 4 * v7);
        v21 += 4 * v7;
      }
      if ( v12 )
      {
        *(_QWORD *)(v9 + 40) = v21;
        *(_QWORD *)(v9 + 32) = (unsigned int)(v7 * v11);
      }
      v10 = sub_140700D70(v9, a1, v18, v19, *(_DWORD **)(v9 + 16), &v23, (int *)&v24);
      if ( v10 < 0 )
      {
        ExFreePoolWithTag((PVOID)v9, 0x4C617652u);
        v9 = 0LL;
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  *a7 = v9;
  return (unsigned int)v10;
}
