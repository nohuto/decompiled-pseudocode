/*
 * XREFs of sub_1800947A0 @ 0x1800947A0
 * Callers:
 *     sub_1800952C0 @ 0x1800952C0 (sub_1800952C0.c)
 * Callees:
 *     sub_180094A10 @ 0x180094A10 (sub_180094A10.c)
 *     sub_180094F44 @ 0x180094F44 (sub_180094F44.c)
 *     sub_180095424 @ 0x180095424 (sub_180095424.c)
 */

__int64 __fastcall sub_1800947A0(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v11; // rsi

  result = sub_180094F44(a1);
  if ( a3 > 32 )
  {
    sub_180095424(a1, a2, a4, a3, a5);
    result = sub_180094A10(a4, (int)a4 + 16 * (int)a3, (_DWORD)a1, 64, a3);
    for ( i = 128LL; a3 > i; i = 2 * v11 )
    {
      sub_180094A10((_DWORD)a1, a2, a4, i, a3);
      v11 = 2 * i;
      result = sub_180094A10(a4, (int)a4 + 16 * (int)a3, (_DWORD)a1, v11, a3);
    }
  }
  return result;
}
