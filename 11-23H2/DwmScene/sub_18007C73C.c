/*
 * XREFs of sub_18007C73C @ 0x18007C73C
 * Callers:
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18007CBD4 @ 0x18007CBD4 (sub_18007CBD4.c)
 *     sub_18007E604 @ 0x18007E604 (sub_18007E604.c)
 */

_QWORD *sub_18007C73C(_QWORD *a1, _OWORD *a2, _OWORD *a3, ...)
{
  _OWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  _OWORD *v7; // rax
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
  v4 = a3 - a2;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      sub_180011B80();
    sub_18007E604();
    v7 = (_OWORD *)*a1;
    while ( v3 != a3 )
      *v7++ = *v3++;
    v9 = 0LL;
    a1[1] = v7;
    sub_18007CBD4((__int64 *)va);
  }
  return a1;
}
