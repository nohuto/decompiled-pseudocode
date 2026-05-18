/*
 * XREFs of sub_180096C90 @ 0x180096C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009695C @ 0x18009695C (sub_18009695C.c)
 */

__int64 *sub_180096C90(__int64 a1, __int64 *a2, int a3, int a4, ...)
{
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF
  __int64 v8; // [rsp+60h] [rbp+28h] BYREF
  va_list va; // [rsp+60h] [rbp+28h]
  __int64 v10; // [rsp+68h] [rbp+30h] BYREF
  va_list va1; // [rsp+68h] [rbp+30h]
  va_list va2; // [rsp+70h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v7 = a4;
  v6 = a3;
  sub_18009695C(a2, &v6, &v7, (__int64 *)va, (int *)va2, (__int64 *)va1);
  return a2;
}
