/*
 * XREFs of sub_1800A46AC @ 0x1800A46AC
 * Callers:
 *     sub_1800A4260 @ 0x1800A4260 (sub_1800A4260.c)
 *     sub_1800A542C @ 0x1800A542C (sub_1800A542C.c)
 * Callees:
 *     sub_1800A5308 @ 0x1800A5308 (sub_1800A5308.c)
 */

void __fastcall sub_1800A46AC(float *a1, float *a2, float *a3, __int64 a4, __int64 a5, int a6, __int64 a7)
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
            sub_1800A5308(a1, a2, v9);
            return;
          }
        }
        while ( *(a2 - 4) <= *a3 );
        if ( a4 == 1 )
          sub_1800A52D0(a1, a2, v9);
        else
          sub_1800A4768((_DWORD)a1, (_DWORD)a2, (_DWORD)v9, a4, v8, a6, a7);
        return;
      }
      a1 += 4;
      --a4;
    }
  }
}
