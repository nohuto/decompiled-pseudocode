/*
 * XREFs of sub_18000FE54 @ 0x18000FE54
 * Callers:
 *     sub_18000DA64 @ 0x18000DA64 (sub_18000DA64.c)
 * Callees:
 *     sub_18000C0D8 @ 0x18000C0D8 (sub_18000C0D8.c)
 */

__int64 sub_18000FE54(_WORD *a1, __int64 a2, _QWORD a3, ...)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  int v6; // eax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = sub_18000C0D8();
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147024774;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    a1[v5] = 0;
    return v4;
  }
  v4 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v4;
}
