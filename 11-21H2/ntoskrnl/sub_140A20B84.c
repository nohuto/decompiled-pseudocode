/*
 * XREFs of sub_140A20B84 @ 0x140A20B84
 * Callers:
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 * Callees:
 *     sub_140A20B1C @ 0x140A20B1C (sub_140A20B1C.c)
 */

__int64 __fastcall sub_140A20B84(__int64 **a1, int *a2, __int64 a3, _DWORD *a4)
{
  int v4; // r11d
  unsigned int v5; // edi
  __int64 v9; // rsi
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  if ( *a4 )
  {
    v9 = (unsigned int)*a4;
    do
    {
      if ( (int)sub_140A20B1C(a1, *a2) >= 0 )
        ++v4;
      else
        v5 = -2147483635;
      ++a2;
      --v9;
    }
    while ( v9 );
  }
  result = v5;
  *a4 = v4;
  return result;
}
