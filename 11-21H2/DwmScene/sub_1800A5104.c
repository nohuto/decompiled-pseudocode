/*
 * XREFs of sub_1800A5104 @ 0x1800A5104
 * Callers:
 *     sub_1800A505C @ 0x1800A505C (sub_1800A505C.c)
 *     sub_1800A5334 @ 0x1800A5334 (sub_1800A5334.c)
 *     sub_1800A573C @ 0x1800A573C (sub_1800A573C.c)
 * Callees:
 *     sub_1800A4C1C @ 0x1800A4C1C (sub_1800A4C1C.c)
 */

float *__fastcall sub_1800A5104(float *Src, float *a2)
{
  float *i; // rbx
  __int128 v5; // xmm6
  float *v6; // rcx
  float *j; // rax

  if ( Src != a2 )
  {
    for ( i = Src + 4; i != a2; i += 4 )
    {
      v5 = *(_OWORD *)i;
      v6 = i;
      if ( COERCE_FLOAT(*(_OWORD *)i) <= *Src )
      {
        for ( j = i; ; v6 = j )
        {
          j -= 4;
          if ( *(float *)&v5 <= *j )
            break;
          *(_OWORD *)v6 = *(_OWORD *)j;
        }
        *(_OWORD *)v6 = v5;
      }
      else
      {
        sub_1800A4C1C(Src, (__int64)i, (__int64)(i + 4));
        *(_OWORD *)Src = v5;
      }
    }
  }
  return a2;
}
