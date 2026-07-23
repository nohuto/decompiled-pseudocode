/*
 * XREFs of sub_140856634 @ 0x140856634
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_1409DDF80 @ 0x1409DDF80 (sub_1409DDF80.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140856634(_WORD *Src, _WORD *a2, _OWORD *a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 v10; // rsi
  __int64 v11; // rbp
  SIZE_T v12; // rbx
  char *PoolWithTag; // rax
  char *v14; // rdi
  int v15; // eax
  size_t v16; // rsi
  __int64 v17; // rdx

  v4 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Src[v6] );
  v10 = 2 * v6 + 4;
  do
    ++v4;
  while ( a2[v4] );
  v11 = 2 * v4 + 4;
  v12 = v10 + 2 * v4 + 76;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x70696D57u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v12);
    *(_DWORD *)v14 = v12;
    *((_DWORD *)v14 + 1) = a4;
    *((_QWORD *)v14 + 1) = 1LL;
    *((_DWORD *)v14 + 11) = 266;
    *(_OWORD *)(v14 + 24) = *a3;
    *((_QWORD *)v14 + 2) = MEMORY[0xFFFFF78000000014];
    v15 = v10 + v11;
    *((_WORD *)v14 + 32) = 0;
    v16 = v10 - 2;
    *((_DWORD *)v14 + 12) = 64;
    *((_DWORD *)v14 + 14) = 72;
    *((_DWORD *)v14 + 15) = v15;
    *((_WORD *)v14 + 36) = v16;
    memmove(v14 + 74, Src, v16);
    v16 >>= 1;
    *(_WORD *)&v14[2 * v16 + 74] = v11 - 2;
    memmove(&v14[2 * v16 + 76], a2, v11 - 2);
    LOBYTE(v17) = 1;
    sub_14075DD3C(v14, v17, 0);
    ExFreePoolWithTag(v14, 0);
  }
}
