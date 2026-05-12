/*
 * XREFs of sub_1C0073C4C @ 0x1C0073C4C
 * Callers:
 *     sub_1C006ECA8 @ 0x1C006ECA8 (sub_1C006ECA8.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C0073C4C(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
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
