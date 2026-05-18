/*
 * XREFs of sub_18000EAD0 @ 0x18000EAD0
 * Callers:
 *     sub_18000DD04 @ 0x18000DD04 (sub_18000DD04.c)
 * Callees:
 *     sub_18000F770 @ 0x18000F770 (sub_18000F770.c)
 */

_WORD *sub_18000EAD0(_WORD *a1, _WORD *a2, int a3, ...)
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
      sub_18000F770((_DWORD)a1, v4, a3, a3, (__int64)va);
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
