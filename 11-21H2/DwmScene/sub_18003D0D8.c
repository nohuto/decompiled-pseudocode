/*
 * XREFs of sub_18003D0D8 @ 0x18003D0D8
 * Callers:
 *     sub_18003D350 @ 0x18003D350 (sub_18003D350.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003D0D8(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax

  v6 = sub_18001D684();
  v7 = 0LL;
  if ( v6 )
    v7 = sub_1800B15EC(v6, *a2, a3);
  *a1 = v7;
  return a1;
}
