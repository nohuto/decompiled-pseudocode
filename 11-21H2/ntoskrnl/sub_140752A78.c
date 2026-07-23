/*
 * XREFs of sub_140752A78 @ 0x140752A78
 * Callers:
 *     sub_140754108 @ 0x140754108 (sub_140754108.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140752A78(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  unsigned int v8; // edi
  void *Pool2; // rbx

  v6 = 8LL * a2;
  v7 = 0xFFFFFFFFLL;
  if ( v6 <= 0xFFFFFFFF )
    v7 = (unsigned int)v6;
  v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 > 0xFFFFFFFF )
    return v8;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v7, 1950442835LL);
  if ( Pool2 )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v7] > 0x7FFFFFFF0000LL || &Src[v7] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, Src, (unsigned int)v7);
    if ( (v8 & 0x80000000) != 0 )
      ExFreePoolWithTag(Pool2, 0);
    else
      *a4 = Pool2;
    return v8;
  }
  return 3221225626LL;
}
