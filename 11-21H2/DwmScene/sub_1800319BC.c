/*
 * XREFs of sub_1800319BC @ 0x1800319BC
 * Callers:
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_1800889C0 @ 0x1800889C0 (sub_1800889C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800319BC(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h]

  v4 = sub_18001D684();
  v2 = 0LL;
  if ( v4 )
    v2 = sub_1800889C0();
  *a1 = v2;
  return a1;
}
