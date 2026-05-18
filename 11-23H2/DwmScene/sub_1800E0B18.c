/*
 * XREFs of sub_1800E0B18 @ 0x1800E0B18
 * Callers:
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 * Callees:
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 *     unknown_libname_6 @ 0x18003A9D4 (unknown_libname_6.c)
 */

__int64 **__fastcall sub_1800E0B18(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v7; // rdi
  __int64 **result; // rax

  if ( a3 != a4 )
  {
    v7 = unknown_libname_6(a4, *(__int64 **)(a1 + 8), a3);
    sub_18001203C((__int64)v7, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
  }
  result = a2;
  *a2 = a3;
  return result;
}
