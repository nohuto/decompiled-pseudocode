/*
 * XREFs of sub_1800A4630 @ 0x1800A4630
 * Callers:
 *     sub_1800A4170 @ 0x1800A4170 (sub_1800A4170.c)
 *     sub_1800A5334 @ 0x1800A5334 (sub_1800A5334.c)
 * Callees:
 *     sub_1800A5308 @ 0x1800A5308 (sub_1800A5308.c)
 */

void __fastcall sub_1800A4630(float *a1, float *a2, float *a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v8; // r11
  float *v9; // r10

  if ( a2 != a3 && a1 != a2 )
  {
    while ( *a2 <= *a1 )
    {
      a1 += 4;
      --a4;
      if ( a1 == a2 )
        return;
    }
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
    while ( *a3 <= *(a2 - 4) );
    if ( a4 == 1 )
      sub_1800A52D0(a1, a2, v9);
    else
      sub_1800A4724((_DWORD)a1, (_DWORD)a2, (_DWORD)v9, a4, v8, a6, a7);
  }
}
