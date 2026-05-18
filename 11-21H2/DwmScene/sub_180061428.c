/*
 * XREFs of sub_180061428 @ 0x180061428
 * Callers:
 *     sub_18010377F @ 0x18010377F (sub_18010377F.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180060694 @ 0x180060694 (sub_180060694.c)
 */

__int64 __fastcall sub_180061428(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_180060694((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
