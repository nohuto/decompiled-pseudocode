/*
 * XREFs of sub_18000E350 @ 0x18000E350
 * Callers:
 *     sub_18000DA64 @ 0x18000DA64 (sub_18000DA64.c)
 *     sub_180010348 @ 0x180010348 (sub_180010348.c)
 * Callees:
 *     sub_18000CCF8 @ 0x18000CCF8 (sub_18000CCF8.c)
 */

signed int sub_18000E350()
{
  signed int result; // eax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  result = GetLastError();
  if ( result )
  {
    if ( result <= 0 )
      return result;
  }
  else
  {
    sub_18000CCF8(0LL, 0LL, 0LL, 0LL, 0LL, retaddr, 0x8007029C);
    LOWORD(result) = 668;
  }
  return (unsigned __int16)result | 0x80070000;
}
