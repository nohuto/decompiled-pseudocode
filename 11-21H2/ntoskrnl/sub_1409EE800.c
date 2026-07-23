/*
 * XREFs of sub_1409EE800 @ 0x1409EE800
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall sub_1409EE800(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v5; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(8 * *(_DWORD *)(a1 + 1040) + 64), 1450669125LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x50uLL);
    v5[6] = a2;
    v5[2] = 3401298175LL;
    *((_WORD *)v5 + 30) = *(_WORD *)(a1 + 1040);
  }
  return v5;
}
