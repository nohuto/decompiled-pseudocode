/*
 * XREFs of sub_1C003EF0C @ 0x1C003EF0C
 * Callers:
 *     sub_1C000E18C @ 0x1C000E18C (sub_1C000E18C.c)
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     sub_1C0018F00 @ 0x1C0018F00 (sub_1C0018F00.c)
 *     sub_1C003FE70 @ 0x1C003FE70 (sub_1C003FE70.c)
 *     StorPortReady @ 0x1C0046E60 (StorPortReady.c)
 *     sub_1C0048F2C @ 0x1C0048F2C (sub_1C0048F2C.c)
 *     sub_1C004997C @ 0x1C004997C (sub_1C004997C.c)
 *     sub_1C005ABDC @ 0x1C005ABDC (sub_1C005ABDC.c)
 *     sub_1C005D5F0 @ 0x1C005D5F0 (sub_1C005D5F0.c)
 *     sub_1C005DA08 @ 0x1C005DA08 (sub_1C005DA08.c)
 *     sub_1C005E0A0 @ 0x1C005E0A0 (sub_1C005E0A0.c)
 *     sub_1C005E574 @ 0x1C005E574 (sub_1C005E574.c)
 *     sub_1C005EDA0 @ 0x1C005EDA0 (sub_1C005EDA0.c)
 *     sub_1C005F3EC @ 0x1C005F3EC (sub_1C005F3EC.c)
 *     sub_1C0060C18 @ 0x1C0060C18 (sub_1C0060C18.c)
 *     sub_1C00627D8 @ 0x1C00627D8 (sub_1C00627D8.c)
 *     sub_1C00A4268 @ 0x1C00A4268 (sub_1C00A4268.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003EF0C(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
