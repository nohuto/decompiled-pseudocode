/*
 * XREFs of sub_18007AA0C @ 0x18007AA0C
 * Callers:
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 * Callees:
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18007AA0C(__int64 *a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  sub_180017558(a2, a1);
  sub_18002BCC0(*a1, 1, 0);
  sub_18002BCC0(*a1, v10 + 2, v10);
  sub_18002BCC0(*a1, v11 + 4, v11);
  sub_18005D70C(*a1, a3, a4, 0, a5, a6, a7, v12 & v14, v12 & v15, v12 & v16);
  return a1;
}
