/*
 * XREFs of sub_14081EA70 @ 0x14081EA70
 * Callers:
 *     sub_140AF7328 @ 0x140AF7328 (sub_140AF7328.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140748D08 @ 0x140748D08 (sub_140748D08.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_DWORD *__fastcall sub_14081EA70(_DWORD *Src, _DWORD *a2)
{
  _DWORD *v5; // rbp
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // r14d
  _DWORD *Pool2; // rax

  if ( !Src )
    return a2;
  if ( !a2 )
    return Src;
  v5 = 0LL;
  v6 = (unsigned int)sub_140748D08(Src);
  v7 = sub_140748D08(a2);
  if ( (_DWORD)v6 && v7 )
  {
    v8 = v7 - 4;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v7 - 4 + v6), 538996816LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, Src, (unsigned int)v6);
      memmove((char *)v5 + v6, a2 + 1, v8);
      *v5 += *a2;
    }
  }
  return v5;
}
