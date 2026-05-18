/*
 * XREFs of sub_18002D020 @ 0x18002D020
 * Callers:
 *     sub_18002D0B8 @ 0x18002D0B8 (sub_18002D0B8.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18007FCFC @ 0x18007FCFC (sub_18007FCFC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002D020(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h]

  v4 = sub_18001D684();
  v2 = 0LL;
  if ( v4 )
    v2 = sub_18007FCFC();
  *a1 = v2;
  return a1;
}
