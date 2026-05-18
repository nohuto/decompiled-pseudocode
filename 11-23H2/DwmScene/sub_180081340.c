/*
 * XREFs of sub_180081340 @ 0x180081340
 * Callers:
 *     sub_180043140 @ 0x180043140 (sub_180043140.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004B580 @ 0x18004B580 (sub_18004B580.c)
 *     sub_180051810 @ 0x180051810 (sub_180051810.c)
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 *     sub_18008F8C0 @ 0x18008F8C0 (sub_18008F8C0.c)
 *     sub_1800967F0 @ 0x1800967F0 (sub_1800967F0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180081340(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  sub_1800134DC((void **)(*a2 + 24), (void **)(a1 + 24));
  *(_BYTE *)(*a2 + 72) = *(_BYTE *)(a1 + 72);
  result = *a2;
  *(_DWORD *)(*a2 + 76) = *(_DWORD *)(a1 + 76);
  v5 = a2[1];
  if ( v5 )
    return sub_180010530(v5);
  return result;
}
