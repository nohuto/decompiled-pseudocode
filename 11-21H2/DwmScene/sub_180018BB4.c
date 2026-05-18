/*
 * XREFs of sub_180018BB4 @ 0x180018BB4
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

void **__fastcall sub_180018BB4(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void **result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 0x10 )
    sub_180010884(*(char **)(a1 + 16), v1 + 1);
  *(_QWORD *)(a1 + 32) = 0LL;
  result = &stdext::exception::`vftable';
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &stdext::exception::`vftable';
  return result;
}
