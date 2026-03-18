/*
 * XREFs of __tailMerge_d2d1_dll @ 0x180102941
 * Callers:
 *     __imp_load_D2D1InvertMatrix @ 0x180102935 (__imp_load_D2D1InvertMatrix.c)
 *     __imp_load_D2D1MakeRotateMatrix @ 0x1801029C0 (__imp_load_D2D1MakeRotateMatrix.c)
 *     __imp_load_D2D1MakeSkewMatrix @ 0x1801029D2 (__imp_load_D2D1MakeSkewMatrix.c)
 *     __imp_load_D2D1IsMatrixInvertible @ 0x1801029E4 (__imp_load_D2D1IsMatrixInvertible.c)
 *     __imp_load_D2D1CreateFactory @ 0x180103223 (__imp_load_D2D1CreateFactory.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800F39B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_d2d1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_d2d1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
