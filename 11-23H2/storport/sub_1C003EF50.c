/*
 * XREFs of sub_1C003EF50 @ 0x1C003EF50
 * Callers:
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     sub_1C0018F00 @ 0x1C0018F00 (sub_1C0018F00.c)
 *     sub_1C0037120 @ 0x1C0037120 (sub_1C0037120.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     StorPortBusy @ 0x1C0045E10 (StorPortBusy.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003EF50(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL);
}
