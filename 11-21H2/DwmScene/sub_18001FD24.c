/*
 * XREFs of sub_18001FD24 @ 0x18001FD24
 * Callers:
 *     sub_18010132C @ 0x18010132C (sub_18010132C.c)
 *     sub_1801031E4 @ 0x1801031E4 (sub_1801031E4.c)
 *     sub_180106D05 @ 0x180106D05 (sub_180106D05.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18001FD24(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    result = sub_180010884(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
