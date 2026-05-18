/*
 * XREFs of sub_180095024 @ 0x180095024
 * Callers:
 *     sub_180094F44 @ 0x180094F44 (sub_180094F44.c)
 *     sub_1800952C0 @ 0x1800952C0 (sub_1800952C0.c)
 *     sub_18009564C @ 0x18009564C (sub_18009564C.c)
 * Callees:
 *     sub_180094AAC @ 0x180094AAC (sub_180094AAC.c)
 */

char *__fastcall sub_180095024(char *Src, char *a2)
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
      if ( *(float *)Src <= COERCE_FLOAT(*(_OWORD *)v4) )
      {
        for ( i = (float *)v4; ; v6 = i )
        {
          i -= 4;
          if ( *i <= *(float *)&v5 )
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
