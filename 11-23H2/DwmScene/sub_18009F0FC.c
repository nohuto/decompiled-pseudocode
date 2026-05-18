/*
 * XREFs of sub_18009F0FC @ 0x18009F0FC
 * Callers:
 *     sub_18009F190 @ 0x18009F190 (sub_18009F190.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

_QWORD *__fastcall sub_18009F0FC(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 136);
  v3 = 8LL;
  do
  {
    *(_OWORD *)v5 = 0LL;
    sub_180011020(v2, v5);
    if ( v5[1] )
      sub_180010530(v5[1]);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v5 = 0LL;
  result = sub_180011020((_QWORD *)(a1 + 408), v5);
  if ( v5[1] )
    return (_QWORD *)sub_180010530(v5[1]);
  return result;
}
