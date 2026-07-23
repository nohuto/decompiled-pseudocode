/*
 * XREFs of sub_140A1DA40 @ 0x140A1DA40
 * Callers:
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1DA40(int *a1, unsigned int a2, _WORD *a3, unsigned int a4, _QWORD *a5)
{
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int v9; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  void *Src; // [rsp+20h] [rbp-18h] BYREF

  Src = 0LL;
  v6 = sub_1408038B4(a1, a2, a4, &Src);
  if ( v6 >= 0 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
    v9 = v8 + *((_DWORD *)Src + 2) + 12;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 1;
      PoolWithTag[2] = 5;
      PoolWithTag[1] = v9;
      memmove(PoolWithTag + 3, Src, *((unsigned int *)Src + 2));
      memmove((char *)v11 + *((unsigned int *)Src + 2) + 12, a3, v8);
      *a5 = v11;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  return (unsigned int)v6;
}
