/*
 * XREFs of sub_140502FE4 @ 0x140502FE4
 * Callers:
 *     sub_1405030B0 @ 0x1405030B0 (sub_1405030B0.c)
 *     sub_1405031C0 @ 0x1405031C0 (sub_1405031C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140502FE4(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r11
  __int64 result; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx

  v7 = 0LL;
  v8 = a5 - a1;
  if ( a1 >= a5 )
    v8 = a1 - a5;
  if ( v8 / a2 >= 0xA )
  {
    result = 3221225485LL;
    goto LABEL_13;
  }
  if ( !is_mul_ok(a4, v8) )
    goto LABEL_6;
  v11 = a4 * (unsigned __int128)v8 / a2;
  v7 = 0x3B9ACA00 / a4;
  if ( a1 >= a5 )
  {
    if ( a3 < v11 )
    {
LABEL_6:
      result = 3221225473LL;
      goto LABEL_13;
    }
    result = 0LL;
    *a6 = a3 - v11;
  }
  else
  {
    v12 = -1LL;
    if ( v11 + a3 >= v11 )
      v12 = v11 + a3;
    result = v11 + a3 < v11 ? 0xC0000095 : 0;
    *a6 = v12;
  }
LABEL_13:
  if ( a7 )
    *a7 = v7;
  if ( (int)result < 0 )
  {
    if ( a7 )
      *a7 = 0LL;
    *a6 = 0LL;
  }
  return result;
}
