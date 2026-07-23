/*
 * XREFs of sub_1403CFAC0 @ 0x1403CFAC0
 * Callers:
 *     sub_14084BE78 @ 0x14084BE78 (sub_14084BE78.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1403CFAC0()
{
  __int64 Pool2; // rax

  if ( !qword_140C54E80 )
  {
    Pool2 = ExAllocatePool2(64LL, 16008LL, 1682992969LL);
    qword_140C54E80 = Pool2;
    if ( Pool2 )
      *(_DWORD *)(Pool2 + 4) = 1000;
  }
}
