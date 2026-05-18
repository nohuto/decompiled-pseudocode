/*
 * XREFs of sub_180095990 @ 0x180095990
 * Callers:
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180095990(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8[6]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9[5]; // [rsp+50h] [rbp-38h] BYREF

  v9[4] = a2;
  v4 = **(_QWORD **)(a1 + 24);
  v8[4] = (__int64)v8;
  v8[2] = 0LL;
  v8[3] = 15LL;
  LOBYTE(v8[0]) = 0;
  sub_180012190(v8, byte_180128042, 0LL);
  v5 = sub_18001875C(v9, a2);
  result = sub_180095A64(a1, v5, v4, v8);
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 >= 0x10 )
    result = sub_180010884(*(char **)a2, v7 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
