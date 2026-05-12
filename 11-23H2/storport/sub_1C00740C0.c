/*
 * XREFs of sub_1C00740C0 @ 0x1C00740C0
 * Callers:
 *     sub_1C0018CC4 @ 0x1C0018CC4 (sub_1C0018CC4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C00740C0(__int64 a1, _DWORD a2, _DWORD a3, int a4, ...)
{
  __int64 v4; // rdx
  int v6; // [rsp+98h] [rbp+20h] BYREF
  __int64 v7; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v9; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  v6 = a4;
  v4 = -1LL;
  do
    ++v4;
  while ( aEnabled[v4] );
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, __int64 *, __int64, const char *, __int64, char *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           &unk_1C008AFC8,
           10LL,
           &v6,
           4LL,
           (__int64 *)va,
           4LL,
           "enabled",
           v4 + 1,
           va1,
           4LL,
           0LL);
}
