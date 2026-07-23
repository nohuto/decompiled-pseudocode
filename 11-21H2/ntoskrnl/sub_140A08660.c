/*
 * XREFs of sub_140A08660 @ 0x140A08660
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A08660(__int64 a1, __int64 a2, __int64 a3, int a4, void *Src, size_t Size)
{
  int v8; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi

  if ( a4 )
  {
    if ( (_DWORD)Size )
    {
      v8 = *(_DWORD *)(a2 + 56);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v8 + 16), 0x20666E57u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      *PoolWithTag = 1050884;
      PoolWithTag[1] = v8;
      PoolWithTag[2] = Size;
      PoolWithTag[3] = a4;
      memmove(PoolWithTag + 4, Src, (unsigned int)Size);
      *(_DWORD *)(a2 + 96) = v10[3];
      *(_QWORD *)(a2 + 88) = v10;
    }
    else
    {
      *(_QWORD *)(a2 + 88) = 1LL;
      *(_DWORD *)(a2 + 96) = a4;
    }
  }
  return 0LL;
}
