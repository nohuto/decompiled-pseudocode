/*
 * XREFs of sub_14069A184 @ 0x14069A184
 * Callers:
 *     sub_140698510 @ 0x140698510 (sub_140698510.c)
 *     sub_140699E6C @ 0x140699E6C (sub_140699E6C.c)
 *     sub_14094A034 @ 0x14094A034 (sub_14094A034.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14069A184(const void **a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  void *Pool2; // rax
  const void *v7; // rsi

  v4 = a2;
  v5 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, 48LL * a3, 1483763280LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    if ( *a1 )
    {
      memmove(Pool2, *a1, 48 * v4);
      ExFreePoolWithTag((PVOID)*a1, 0x58706E50u);
    }
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
