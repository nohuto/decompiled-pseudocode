/*
 * XREFs of sub_14051C4E0 @ 0x14051C4E0
 * Callers:
 *     sub_14051C090 @ 0x14051C090 (sub_14051C090.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14051BF88 @ 0x14051BF88 (sub_14051BF88.c)
 *     sub_14051C060 @ 0x14051C060 (sub_14051C060.c)
 *     WheaRequestDeferredRecovery @ 0x140645B10 (WheaRequestDeferredRecovery.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14051C4E0(_DWORD *Src)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  size_t v4; // r14
  void *Pool2; // rax
  void *v6; // rsi

  v2 = 0;
  v3 = sub_14051BF88();
  if ( v3 )
  {
    v4 = (unsigned int)(24 * Src[21] + 88);
    Pool2 = (void *)ExAllocatePool2(64LL, v4, 1466720584LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, Src, v4);
      *(_QWORD *)(v3 + 48) = v6;
      *(_QWORD *)(v3 + 64) = 0LL;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 76) = 2;
      if ( !(unsigned __int8)WheaRequestDeferredRecovery(v3 + 8, v3 + 48) )
      {
        sub_14051C060((_DWORD *)v3);
        v2 = -1073741757;
        ExFreePoolWithTag(v6, 0x576C6148u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741757;
  }
  return v2;
}
