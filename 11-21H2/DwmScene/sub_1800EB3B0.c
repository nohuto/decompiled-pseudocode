/*
 * XREFs of sub_1800EB3B0 @ 0x1800EB3B0
 * Callers:
 *     sub_18010CE6B @ 0x18010CE6B (sub_18010CE6B.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800EB3B0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 >= 0x10 )
    result = sub_180010884(*(char **)(a1 + 24), v1 + 1);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 15LL;
  *(_BYTE *)(a1 + 24) = 0;
  if ( *(_QWORD *)a1 )
  {
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
