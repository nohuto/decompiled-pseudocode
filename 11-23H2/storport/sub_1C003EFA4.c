/*
 * XREFs of sub_1C003EFA4 @ 0x1C003EFA4
 * Callers:
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C0037120 @ 0x1C0037120 (sub_1C0037120.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003EFA4(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           &unk_1C0083210,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           0LL);
}
