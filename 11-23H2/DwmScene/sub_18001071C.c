/*
 * XREFs of sub_18001071C @ 0x18001071C
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010794 @ 0x180010794 (sub_180010794.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180029740 @ 0x180029740 (sub_180029740.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18001071C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180010794(a1 + 496);
  v4 = *a2;
  v5 = sub_180011D4C(a1 + 8, v7);
  sub_180029740(v4, v5);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
