/*
 * XREFs of sub_18000ED38 @ 0x18000ED38
 * Callers:
 *     sub_18000E014 @ 0x18000E014 (sub_18000E014.c)
 * Callees:
 *     sub_18000C0D8 @ 0x18000C0D8 (sub_18000C0D8.c)
 */

_WORD *sub_18000ED38(_WORD *a1, _WORD *a2, _QWORD a3, ...)
{
  __int64 v4; // r10
  _WORD *v5; // rbx
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax

  v4 = a2 - a1;
  v5 = a1;
  if ( (unsigned __int64)(v4 - 1) > 0x7FFFFFFE )
  {
    if ( v4 )
      *a1 = 0;
  }
  else
  {
    v6 = v4 - 1;
    v7 = sub_18000C0D8();
    if ( v7 < 0 || v7 >= v6 )
      v5[v6] = 0;
  }
  if ( a2 != v5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v5[v8] );
    v5 += v8;
  }
  return v5;
}
