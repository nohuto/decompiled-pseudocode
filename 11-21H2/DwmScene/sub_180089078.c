/*
 * XREFs of sub_180089078 @ 0x180089078
 * Callers:
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_180106134 @ 0x180106134 (sub_180106134.c)
 *     sub_180106146 @ 0x180106146 (sub_180106146.c)
 *     sub_180106158 @ 0x180106158 (sub_180106158.c)
 *     sub_18010616A @ 0x18010616A (sub_18010616A.c)
 *     sub_18010617C @ 0x18010617C (sub_18010617C.c)
 *     sub_180106572 @ 0x180106572 (sub_180106572.c)
 *     sub_180106584 @ 0x180106584 (sub_180106584.c)
 *     sub_180106596 @ 0x180106596 (sub_180106596.c)
 *     sub_1801065A8 @ 0x1801065A8 (sub_1801065A8.c)
 *     sub_180106804 @ 0x180106804 (sub_180106804.c)
 *     sub_180106C75 @ 0x180106C75 (sub_180106C75.c)
 *     unknown_libname_70 @ 0x180106F42 (unknown_libname_70.c)
 *     sub_18010CD27 @ 0x18010CD27 (sub_18010CD27.c)
 *     sub_18010CDA5 @ 0x18010CDA5 (sub_18010CDA5.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180089078(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    result = sub_180010884(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
