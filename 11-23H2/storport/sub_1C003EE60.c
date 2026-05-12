/*
 * XREFs of sub_1C003EE60 @ 0x1C003EE60
 * Callers:
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0012300 @ 0x1C0012300 (sub_1C0012300.c)
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C0018F00 @ 0x1C0018F00 (sub_1C0018F00.c)
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 *     sub_1C005FAB4 @ 0x1C005FAB4 (sub_1C005FAB4.c)
 *     sub_1C007B570 @ 0x1C007B570 (sub_1C007B570.c)
 *     sub_1C007B6C0 @ 0x1C007B6C0 (sub_1C007B6C0.c)
 *     sub_1C007B860 @ 0x1C007B860 (sub_1C007B860.c)
 *     sub_1C007C758 @ 0x1C007C758 (sub_1C007C758.c)
 *     sub_1C007CAA0 @ 0x1C007CAA0 (sub_1C007CAA0.c)
 *     sub_1C007E470 @ 0x1C007E470 (sub_1C007E470.c)
 *     sub_1C007EC90 @ 0x1C007EC90 (sub_1C007EC90.c)
 *     sub_1C007EDC0 @ 0x1C007EDC0 (sub_1C007EDC0.c)
 *     sub_1C007EEF0 @ 0x1C007EEF0 (sub_1C007EEF0.c)
 *     sub_1C007FC98 @ 0x1C007FC98 (sub_1C007FC98.c)
 *     sub_1C007FFA0 @ 0x1C007FFA0 (sub_1C007FFA0.c)
 *     sub_1C0080248 @ 0x1C0080248 (sub_1C0080248.c)
 *     sub_1C008061C @ 0x1C008061C (sub_1C008061C.c)
 *     sub_1C0080A58 @ 0x1C0080A58 (sub_1C0080A58.c)
 *     sub_1C0080F70 @ 0x1C0080F70 (sub_1C0080F70.c)
 *     sub_1C0081040 @ 0x1C0081040 (sub_1C0081040.c)
 *     sub_1C0081288 @ 0x1C0081288 (sub_1C0081288.c)
 *     sub_1C008130C @ 0x1C008130C (sub_1C008130C.c)
 *     sub_1C00813B0 @ 0x1C00813B0 (sub_1C00813B0.c)
 *     sub_1C0081478 @ 0x1C0081478 (sub_1C0081478.c)
 *     sub_1C00815A8 @ 0x1C00815A8 (sub_1C00815A8.c)
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003EE60(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))qword_1C0093C08)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
