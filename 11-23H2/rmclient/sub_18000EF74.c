/*
 * XREFs of sub_18000EF74 @ 0x18000EF74
 * Callers:
 *     sub_18000DF94 @ 0x18000DF94 (sub_18000DF94.c)
 * Callees:
 *     sub_180010AB4 @ 0x180010AB4 (sub_180010AB4.c)
 */

_WORD *sub_18000EF74(_WORD *a1, _WORD *a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rdx
  _WORD *v5; // rbx
  __int64 v6; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a2 - a1;
  v5 = a1;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFF )
      *a1 = 0;
    else
      sub_180010AB4(a1, v4, a3, a3, (__int64 *)va);
  }
  if ( a2 != v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    v5 += v6;
  }
  return v5;
}
