/*
 * XREFs of sub_1C00500F4 @ 0x1C00500F4
 * Callers:
 *     sub_1C0012158 @ 0x1C0012158 (sub_1C0012158.c)
 *     sub_1C0012408 @ 0x1C0012408 (sub_1C0012408.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C00500F4(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  const char *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v7; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v9; // [rsp+A0h] [rbp+28h] BYREF
  va_list va1; // [rsp+A0h] [rbp+28h]
  const char *v11; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  v11 = va_arg(va2, const char *);
  v3 = v11;
  if ( v11 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v11[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  if ( !v11 )
    v3 = "NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, const char *, __int64, char *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           &unk_1C008A080,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v3,
           v5,
           va2,
           4LL,
           0LL);
}
