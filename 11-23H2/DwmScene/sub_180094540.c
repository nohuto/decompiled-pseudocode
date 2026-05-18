/*
 * XREFs of sub_180094540 @ 0x180094540
 * Callers:
 *     sub_180094080 @ 0x180094080 (sub_180094080.c)
 *     sub_1800951C8 @ 0x1800951C8 (sub_1800951C8.c)
 * Callees:
 *     sub_18009519C @ 0x18009519C (sub_18009519C.c)
 */

void __fastcall sub_180094540(float *a1, float *a2, float *a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v8; // r11
  float *v9; // r10

  if ( a2 != a3 )
  {
    while ( a1 != a2 )
    {
      if ( *a2 > *a1 )
      {
        do
        {
          v8 = a5;
          v9 = a3;
          a3 -= 4;
          --a5;
          if ( a2 == a3 )
          {
            sub_18009519C(a1, a2, v9);
            return;
          }
        }
        while ( *a3 <= *(a2 - 4) );
        if ( a4 == 1 )
          sub_180095164(a1, a2, v9);
        else
          sub_180094630((_DWORD)a1, (_DWORD)a2, (_DWORD)v9, a4, v8, a6, a7);
        return;
      }
      a1 += 4;
      --a4;
    }
  }
}
