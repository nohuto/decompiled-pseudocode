/*
 * XREFs of sub_1C0080D3C @ 0x1C0080D3C
 * Callers:
 *     sub_1C0080248 @ 0x1C0080248 (sub_1C0080248.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0080D3C(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           &unk_1C008B728,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
