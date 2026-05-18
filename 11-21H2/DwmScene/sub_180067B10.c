/*
 * XREFs of sub_180067B10 @ 0x180067B10
 * Callers:
 *     sub_1801076D4 @ 0x1801076D4 (sub_1801076D4.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800670BC @ 0x1800670BC (sub_1800670BC.c)
 */

__int64 __fastcall sub_180067B10(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_1800670BC(v2, *(_QWORD **)(a1 + 8));
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
