/*
 * XREFs of sub_18003881C @ 0x18003881C
 * Callers:
 *     sub_180035C88 @ 0x180035C88 (sub_180035C88.c)
 * Callees:
 *     sub_1800109B0 @ 0x1800109B0 (sub_1800109B0.c)
 *     unknown_libname_4 @ 0x18002F6CC (unknown_libname_4.c)
 */

__int64 *__fastcall sub_18003881C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 *result; // rax

  if ( a3 != a4 )
  {
    v7 = unknown_libname_4(a4, *(_QWORD *)(a1 + 8), a3);
    sub_1800109B0(v7, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
  }
  result = a2;
  *a2 = a3;
  return result;
}
