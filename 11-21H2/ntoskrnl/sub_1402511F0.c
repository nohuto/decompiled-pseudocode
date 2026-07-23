/*
 * XREFs of sub_1402511F0 @ 0x1402511F0
 * Callers:
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_1407D8870 @ 0x1407D8870 (sub_1407D8870.c)
 *     sub_140845214 @ 0x140845214 (sub_140845214.c)
 *     sub_140A1ACFC @ 0x140A1ACFC (sub_140A1ACFC.c)
 *     sub_140A1AE24 @ 0x140A1AE24 (sub_140A1AE24.c)
 *     sub_140A1AEE8 @ 0x140A1AEE8 (sub_140A1AEE8.c)
 *     sub_140A1B050 @ 0x140A1B050 (sub_140A1B050.c)
 *     sub_140A1B7E4 @ 0x140A1B7E4 (sub_140A1B7E4.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 */

__int64 sub_1402511F0(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      a1[v4] = 0;
  }
  return v5;
}
