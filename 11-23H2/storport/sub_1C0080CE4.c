/*
 * XREFs of sub_1C0080CE4 @ 0x1C0080CE4
 * Callers:
 *     sub_1C00800D4 @ 0x1C00800D4 (sub_1C00800D4.c)
 *     sub_1C00803F0 @ 0x1C00803F0 (sub_1C00803F0.c)
 *     sub_1C0080BE0 @ 0x1C0080BE0 (sub_1C0080BE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0080CE4(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           &unk_1C008B728,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
