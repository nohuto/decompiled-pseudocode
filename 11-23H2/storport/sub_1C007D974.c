/*
 * XREFs of sub_1C007D974 @ 0x1C007D974
 * Callers:
 *     sub_1C007D7E4 @ 0x1C007D7E4 (sub_1C007D7E4.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 sub_1C007D974(int **a1, __int64 a2, __int64 a3, ...)
{
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  sub_1C0055B8C(*a1, "SetACEBooleanExpr", a3, 23, v7, 0LL);
  return sub_1C007CF64(
           (__int64)a1,
           a2,
           a3,
           0x600000017LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007D640,
           (__int64)va,
           0LL,
           0LL,
           0LL,
           0LL);
}
