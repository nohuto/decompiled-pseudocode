/*
 * XREFs of sub_18007C6AC @ 0x18007C6AC
 * Callers:
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18007CA50 @ 0x18007CA50 (sub_18007CA50.c)
 *     sub_18007CBB4 @ 0x18007CBB4 (sub_18007CBB4.c)
 *     sub_18007E5C0 @ 0x18007E5C0 (sub_18007E5C0.c)
 */

_QWORD *sub_18007C6AC(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 6;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFLL )
      sub_180011B80();
    sub_18007E5C0();
    v7 = sub_18007CA50(a2, a3, *a1);
    v9 = 0LL;
    a1[1] = v7;
    sub_18007CBB4((__int64 *)va);
  }
  return a1;
}
