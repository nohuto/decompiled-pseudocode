/*
 * XREFs of sub_180060A5C @ 0x180060A5C
 * Callers:
 *     sub_18006102C @ 0x18006102C (sub_18006102C.c)
 * Callees:
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A57C @ 0x18002A57C (sub_18002A57C.c)
 *     sub_18005EAD0 @ 0x18005EAD0 (sub_18005EAD0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180060A5C(__int64 a1, __int64 *a2)
{
  char v4; // r8
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v6 = a1 + 472;
  v7 = 1;
  sub_18002A57C(a1 + 472);
  sub_18005EAD0(a2, (_QWORD *)(a1 + 480), v4);
  sub_180029FA0((__int64)&v6);
  return a2;
}
