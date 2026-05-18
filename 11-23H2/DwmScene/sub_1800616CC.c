/*
 * XREFs of sub_1800616CC @ 0x1800616CC
 * Callers:
 *     sub_180067B80 @ 0x180067B80 (sub_180067B80.c)
 * Callees:
 *     sub_18002E2EC @ 0x18002E2EC (sub_18002E2EC.c)
 *     sub_180057290 @ 0x180057290 (sub_180057290.c)
 *     sub_1800584C0 @ 0x1800584C0 (sub_1800584C0.c)
 */

__int64 *sub_1800616CC(__int64 *a1, char *a2, char *a3, ...)
{
  char *v3; // rsi
  unsigned __int64 v4; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  v3 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 4;
  if ( v4 )
  {
    sub_1800584C0(a1, v4);
    v7 = (_QWORD *)*a1;
    while ( v3 != a3 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v8 = *((_QWORD *)v3 + 1);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *v7 = *(_QWORD *)v3;
      v7[1] = *((_QWORD *)v3 + 1);
      v7 += 2;
      v3 += 16;
    }
    sub_18002E2EC((__int64)v7, (__int64)v7);
    v10 = 0LL;
    a1[1] = (__int64)v7;
    sub_180057290((__int64 *)va);
  }
  return a1;
}
