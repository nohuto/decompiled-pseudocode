/*
 * XREFs of sub_1409EE394 @ 0x1409EE394
 * Callers:
 *     sub_1409EE454 @ 0x1409EE454 (sub_1409EE454.c)
 *     sub_1409EE518 @ 0x1409EE518 (sub_1409EE518.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EE394(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 20LL, 2021094469LL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(a1 + 1024) = Pool2;
  return 0LL;
}
