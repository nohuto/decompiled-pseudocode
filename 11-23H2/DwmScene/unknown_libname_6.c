/*
 * XREFs of unknown_libname_6 @ 0x18003A9D4
 * Callers:
 *     sub_18003A100 @ 0x18003A100 (sub_18003A100.c)
 *     sub_18003A228 @ 0x18003A228 (sub_18003A228.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     sub_18003A8DC @ 0x18003A8DC (sub_18003A8DC.c)
 *     sub_18003AA30 @ 0x18003AA30 (sub_18003AA30.c)
 *     sub_18003D19C @ 0x18003D19C (sub_18003D19C.c)
 *     sub_180057AF0 @ 0x180057AF0 (sub_180057AF0.c)
 *     sub_1800739D0 @ 0x1800739D0 (sub_1800739D0.c)
 *     sub_1800E0B18 @ 0x1800E0B18 (sub_1800E0B18.c)
 * Callees:
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

// Microsoft VisualC v7/14 64bit runtime
_QWORD *__fastcall unknown_libname_6(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    sub_180011020(a3, i);
    a3 += 2;
  }
  return a3;
}
