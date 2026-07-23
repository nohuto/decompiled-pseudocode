/*
 * XREFs of sub_1409F2510 @ 0x1409F2510
 * Callers:
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F2510(void **a1, int a2)
{
  unsigned int v3; // ebx
  void *v4; // rcx
  _DWORD *Pool2; // rax
  _DWORD *v7; // rsi

  v3 = 0;
  v4 = *a1;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x56777445u);
    *a1 = 0LL;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(4 * a2 + 8), 1450669125LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, (unsigned int)(4 * a2 + 8));
    v7[1] = a2;
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
