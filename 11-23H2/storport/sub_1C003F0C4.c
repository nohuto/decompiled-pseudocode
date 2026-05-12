/*
 * XREFs of sub_1C003F0C4 @ 0x1C003F0C4
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0004D60 @ 0x1C0004D60 (sub_1C0004D60.c)
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C0006C10 @ 0x1C0006C10 (sub_1C0006C10.c)
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 *     sub_1C0007B00 @ 0x1C0007B00 (sub_1C0007B00.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C0011880 @ 0x1C0011880 (sub_1C0011880.c)
 *     sub_1C00119D8 @ 0x1C00119D8 (sub_1C00119D8.c)
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C0011E40 @ 0x1C0011E40 (sub_1C0011E40.c)
 *     sub_1C0011EE8 @ 0x1C0011EE8 (sub_1C0011EE8.c)
 *     sub_1C0011FB8 @ 0x1C0011FB8 (sub_1C0011FB8.c)
 *     sub_1C001209C @ 0x1C001209C (sub_1C001209C.c)
 *     sub_1C0012228 @ 0x1C0012228 (sub_1C0012228.c)
 *     sub_1C0012300 @ 0x1C0012300 (sub_1C0012300.c)
 *     sub_1C0012644 @ 0x1C0012644 (sub_1C0012644.c)
 *     sub_1C00127A8 @ 0x1C00127A8 (sub_1C00127A8.c)
 *     sub_1C0012900 @ 0x1C0012900 (sub_1C0012900.c)
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     sub_1C0014130 @ 0x1C0014130 (sub_1C0014130.c)
 *     CompletionFunction @ 0x1C0014960 (CompletionFunction.c)
 *     sub_1C0014AF0 @ 0x1C0014AF0 (sub_1C0014AF0.c)
 *     sub_1C0014D50 @ 0x1C0014D50 (sub_1C0014D50.c)
 *     sub_1C00150F0 @ 0x1C00150F0 (sub_1C00150F0.c)
 *     sub_1C00151A0 @ 0x1C00151A0 (sub_1C00151A0.c)
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 *     sub_1C00224F4 @ 0x1C00224F4 (sub_1C00224F4.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C004BA94 @ 0x1C004BA94 (sub_1C004BA94.c)
 *     sub_1C004BF10 @ 0x1C004BF10 (sub_1C004BF10.c)
 *     sub_1C004C410 @ 0x1C004C410 (sub_1C004C410.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 *     WorkerRoutine @ 0x1C0063A70 (WorkerRoutine.c)
 *     sub_1C0063F90 @ 0x1C0063F90 (sub_1C0063F90.c)
 *     sub_1C00A1110 @ 0x1C00A1110 (sub_1C00A1110.c)
 *     sub_1C00A11B0 @ 0x1C00A11B0 (sub_1C00A11B0.c)
 *     sub_1C00A39D0 @ 0x1C00A39D0 (sub_1C00A39D0.c)
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003F0C4(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
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
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
