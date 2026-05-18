/*
 * XREFs of sub_1800CD0D4 @ 0x1800CD0D4
 * Callers:
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 * Callees:
 *     sub_1800CD128 @ 0x1800CD128 (sub_1800CD128.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CD0D4(__int64 a1, __int64 *a2, unsigned int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v5[0] = 0LL;
  v6 = 0LL;
  if ( &v6 != a2 )
  {
    v6 = *a2;
    *a2 = 0LL;
  }
  sub_1800CD128(a1, &v6, v5, a3);
  return sub_18000E72C(a2);
}
