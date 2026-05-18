/*
 * XREFs of sub_18009702C @ 0x18009702C
 * Callers:
 *     sub_1800973E0 @ 0x1800973E0 (sub_1800973E0.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003180C @ 0x18003180C (sub_18003180C.c)
 *     sub_18007E604 @ 0x18007E604 (sub_18007E604.c)
 */

__int64 *sub_18009702C(__int64 *a1, char *a2, char *a3, ...)
{
  char *v3; // rbp
  unsigned __int64 v4; // rdx
  _QWORD *v7; // rdi
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  v3 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      sub_180011B80();
    sub_18007E604(a1, v4);
    v7 = (_QWORD *)*a1;
    while ( v3 != a3 )
    {
      sub_18001246C(v7, v3);
      v7 += 2;
      v3 += 16;
    }
    sub_18001203C((__int64)v7, (__int64)v7);
    v9 = 0LL;
    a1[1] = (__int64)v7;
    sub_18003180C((__int64 *)va);
  }
  return a1;
}
