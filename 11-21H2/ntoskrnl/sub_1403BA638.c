/*
 * XREFs of sub_1403BA638 @ 0x1403BA638
 * Callers:
 *     sub_1403BA410 @ 0x1403BA410 (sub_1403BA410.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403BA638(const void **a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int16 v5; // si
  void *Pool2; // rax
  unsigned int v7; // ebx
  void *v8; // rbp

  v2 = *(unsigned __int16 *)a1;
  if ( *((unsigned __int16 *)a1 + 1) < (unsigned __int64)(v2 + 2) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v2 + 2;
    Pool2 = (void *)ExAllocatePool2(64LL, v5, 1297630800LL);
    v7 = 0;
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a1[1], v5);
      *(_WORD *)a2 = *(_WORD *)a1;
      *(_QWORD *)(a2 + 8) = v8;
      *(_WORD *)(a2 + 2) = v5;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
