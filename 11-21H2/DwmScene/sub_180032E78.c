/*
 * XREFs of sub_180032E78 @ 0x180032E78
 * Callers:
 *     sub_18010094F @ 0x18010094F (sub_18010094F.c)
 *     sub_180100A62 @ 0x180100A62 (sub_180100A62.c)
 *     sub_180100A7B @ 0x180100A7B (sub_180100A7B.c)
 *     sub_180100C67 @ 0x180100C67 (sub_180100C67.c)
 *     sub_180100D7A @ 0x180100D7A (sub_180100D7A.c)
 *     sub_180100D93 @ 0x180100D93 (sub_180100D93.c)
 *     sub_180101548 @ 0x180101548 (sub_180101548.c)
 *     sub_180103520 @ 0x180103520 (sub_180103520.c)
 *     sub_1801035DC @ 0x1801035DC (sub_1801035DC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 */

__int64 __fastcall sub_180032E78(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_180011138((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
