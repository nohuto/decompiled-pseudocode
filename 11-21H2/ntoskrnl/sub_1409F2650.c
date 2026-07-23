/*
 * XREFs of sub_1409F2650 @ 0x1409F2650
 * Callers:
 *     sub_1409F12F0 @ 0x1409F12F0 (sub_1409F12F0.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_OWORD *__fastcall sub_1409F2650(int a1)
{
  _OWORD *Pool2; // rax
  _OWORD *v3; // rbx
  void *v4; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 1450669125LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    v4 = (void *)ExAllocatePool2(256LL, (unsigned int)(8 * a1), 1450669125LL);
    *((_QWORD *)v3 + 3) = v4;
    if ( !v4 )
    {
      ExFreePoolWithTag(v3, 0x56777445u);
      return 0LL;
    }
    memset(v4, 0, (unsigned int)(8 * a1));
    *((_DWORD *)v3 + 5) = a1;
  }
  return v3;
}
