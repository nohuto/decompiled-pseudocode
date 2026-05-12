/*
 * XREFs of sub_1C003F074 @ 0x1C003F074
 * Callers:
 *     sub_1C0004D60 @ 0x1C0004D60 (sub_1C0004D60.c)
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C0006C10 @ 0x1C0006C10 (sub_1C0006C10.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0011880 @ 0x1C0011880 (sub_1C0011880.c)
 *     sub_1C00119D8 @ 0x1C00119D8 (sub_1C00119D8.c)
 *     sub_1C0011E40 @ 0x1C0011E40 (sub_1C0011E40.c)
 *     sub_1C0011FB8 @ 0x1C0011FB8 (sub_1C0011FB8.c)
 *     sub_1C001209C @ 0x1C001209C (sub_1C001209C.c)
 *     sub_1C0012228 @ 0x1C0012228 (sub_1C0012228.c)
 *     sub_1C0012300 @ 0x1C0012300 (sub_1C0012300.c)
 *     sub_1C001250C @ 0x1C001250C (sub_1C001250C.c)
 *     sub_1C00127A8 @ 0x1C00127A8 (sub_1C00127A8.c)
 *     sub_1C001284C @ 0x1C001284C (sub_1C001284C.c)
 *     sub_1C0012900 @ 0x1C0012900 (sub_1C0012900.c)
 *     sub_1C00129D8 @ 0x1C00129D8 (sub_1C00129D8.c)
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C0014130 @ 0x1C0014130 (sub_1C0014130.c)
 *     CompletionFunction @ 0x1C0014960 (CompletionFunction.c)
 *     sub_1C0014AF0 @ 0x1C0014AF0 (sub_1C0014AF0.c)
 *     sub_1C0014BC8 @ 0x1C0014BC8 (sub_1C0014BC8.c)
 *     sub_1C0014D50 @ 0x1C0014D50 (sub_1C0014D50.c)
 *     sub_1C0015050 @ 0x1C0015050 (sub_1C0015050.c)
 *     sub_1C00150F0 @ 0x1C00150F0 (sub_1C00150F0.c)
 *     sub_1C00151A0 @ 0x1C00151A0 (sub_1C00151A0.c)
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 *     sub_1C00224F4 @ 0x1C00224F4 (sub_1C00224F4.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C003FB90 @ 0x1C003FB90 (sub_1C003FB90.c)
 *     sub_1C0048F2C @ 0x1C0048F2C (sub_1C0048F2C.c)
 *     sub_1C004997C @ 0x1C004997C (sub_1C004997C.c)
 *     sub_1C005BE2C @ 0x1C005BE2C (sub_1C005BE2C.c)
 *     sub_1C00A1110 @ 0x1C00A1110 (sub_1C00A1110.c)
 *     sub_1C00A11B0 @ 0x1C00A11B0 (sub_1C00A11B0.c)
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 *     sub_1C00A39D0 @ 0x1C00A39D0 (sub_1C00A39D0.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 *     sub_1C00A8288 @ 0x1C00A8288 (sub_1C00A8288.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003F074(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
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
           8LL,
           0LL);
}
