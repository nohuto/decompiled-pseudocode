/*
 * XREFs of sub_14083B12C @ 0x14083B12C
 * Callers:
 *     sub_14083AAB8 @ 0x14083AAB8 (sub_14083AAB8.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083B12C(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, 256LL, 1281520193LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  *(_WORD *)a1 = 0;
  if ( Pool2 )
  {
    *(_WORD *)(a1 + 2) = 16;
    return 0LL;
  }
  else
  {
    *(_WORD *)(a1 + 2) = 0;
    return 3221225626LL;
  }
}
