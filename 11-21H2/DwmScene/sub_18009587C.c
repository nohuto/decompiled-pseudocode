/*
 * XREFs of sub_18009587C @ 0x18009587C
 * Callers:
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800954DC @ 0x1800954DC (sub_1800954DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009587C(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 *v7; // rcx
  char *v8; // rdx
  unsigned __int64 v9; // rdx

  v4 = a2;
  result = sub_1800954DC(a1, a2);
  v7 = &a1[4 * v4 + 24];
  if ( v7 != (__int64 *)a3 )
  {
    v8 = (char *)a3;
    if ( *(_QWORD *)(a3 + 24) >= 0x10uLL )
      v8 = *(char **)a3;
    result = (__int64)sub_180012190(v7, v8, *(_QWORD *)(a3 + 16));
  }
  v9 = *(_QWORD *)(a3 + 24);
  if ( v9 >= 0x10 )
    result = sub_180010884(*(char **)a3, v9 + 1);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  return result;
}
