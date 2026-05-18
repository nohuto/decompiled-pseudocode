/*
 * XREFs of sub_180094F98 @ 0x180094F98
 * Callers:
 *     sub_180094EF0 @ 0x180094EF0 (sub_180094EF0.c)
 *     sub_1800951C8 @ 0x1800951C8 (sub_1800951C8.c)
 *     sub_180095580 @ 0x180095580 (sub_180095580.c)
 * Callees:
 *     sub_180094AAC @ 0x180094AAC (sub_180094AAC.c)
 */

char *__fastcall sub_180094F98(char *Src, char *a2)
{
  char *v4; // rax
  __int128 v5; // xmm6
  float *v6; // rdx
  char *v7; // rbx
  float *i; // rcx

  if ( Src != a2 )
  {
    v4 = Src + 16;
    while ( v4 != a2 )
    {
      v5 = *(_OWORD *)v4;
      v6 = (float *)v4;
      if ( COERCE_FLOAT(*(_OWORD *)v4) <= *(float *)Src )
      {
        for ( i = (float *)v4; ; v6 = i )
        {
          i -= 4;
          if ( *(float *)&v5 <= *i )
            break;
          *(_OWORD *)v6 = *(_OWORD *)i;
        }
        *(_OWORD *)v6 = v5;
        v4 += 16;
      }
      else
      {
        v7 = v4 + 16;
        sub_180094AAC(Src, (__int64)v4, (__int64)(v4 + 16));
        v4 = v7;
        *(_OWORD *)Src = v5;
      }
    }
  }
  return a2;
}
