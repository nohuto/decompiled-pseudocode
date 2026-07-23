/*
 * XREFs of sub_1402DE7E4 @ 0x1402DE7E4
 * Callers:
 *     sub_1406E3860 @ 0x1406E3860 (sub_1406E3860.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 *     sub_1407753A0 @ 0x1407753A0 (sub_1407753A0.c)
 *     sub_140959330 @ 0x140959330 (sub_140959330.c)
 *     sub_140959490 @ 0x140959490 (sub_140959490.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402DE7E4(__int64 *a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 Pool2; // rax

  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = a4;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(257LL, a2, 538996816LL);
  *a1 = Pool2;
  return Pool2 == 0 ? 0xC000009A : 0;
}
