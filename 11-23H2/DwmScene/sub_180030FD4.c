/*
 * XREFs of sub_180030FD4 @ 0x180030FD4
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_1800363BC @ 0x1800363BC (sub_1800363BC.c)
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18002A6F0 @ 0x18002A6F0 (sub_18002A6F0.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_1800A02A4 @ 0x1800A02A4 (sub_1800A02A4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180030FD4(__int64 *a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_18003890C(a2, &v5);
  if ( v5 )
  {
    a1[2] = sub_1800A02A4(v5, v3);
    sub_18002A6F0(a1, &v5);
  }
  if ( v6 )
    sub_180010530(v6);
  return a1;
}
