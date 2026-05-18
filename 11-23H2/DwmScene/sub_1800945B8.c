/*
 * XREFs of sub_1800945B8 @ 0x1800945B8
 * Callers:
 *     sub_180094170 @ 0x180094170 (sub_180094170.c)
 *     sub_1800952C0 @ 0x1800952C0 (sub_1800952C0.c)
 * Callees:
 *     sub_18009519C @ 0x18009519C (sub_18009519C.c)
 */

void __fastcall sub_1800945B8(float *a1, float *a2, float *a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v8; // r11
  float *v9; // r10

  if ( a2 != a3 )
  {
    while ( a1 != a2 )
    {
      if ( *a1 > *a2 )
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
        while ( *(a2 - 4) <= *a3 );
        if ( a4 == 1 )
          sub_180095164(a1, a2, v9);
        else
          sub_180094674((_DWORD)a1, (_DWORD)a2, (_DWORD)v9, a4, v8, a6, a7);
        return;
      }
      a1 += 4;
      --a4;
    }
  }
}
