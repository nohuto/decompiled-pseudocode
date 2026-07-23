/*
 * XREFs of IopCombineCmResourceList @ 0x140810888
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140B3A148 (IopAllocateLegacyBootResources.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x1407903BC (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_DWORD *__fastcall IopCombineCmResourceList(_DWORD *Src, _DWORD *a2)
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
  v6 = (unsigned int)PnpDetermineResourceListSize(Src);
  v7 = PnpDetermineResourceListSize(a2);
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
