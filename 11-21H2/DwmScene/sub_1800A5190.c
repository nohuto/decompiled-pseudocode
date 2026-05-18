/*
 * XREFs of sub_1800A5190 @ 0x1800A5190
 * Callers:
 *     sub_1800A50B0 @ 0x1800A50B0 (sub_1800A50B0.c)
 *     sub_1800A542C @ 0x1800A542C (sub_1800A542C.c)
 *     sub_1800A585C @ 0x1800A585C (sub_1800A585C.c)
 * Callees:
 *     sub_1800A4C1C @ 0x1800A4C1C (sub_1800A4C1C.c)
 */

float *__fastcall sub_1800A5190(float *Src, float *a2)
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
      if ( *Src <= COERCE_FLOAT(*(_OWORD *)i) )
      {
        for ( j = i; ; v6 = j )
        {
          j -= 4;
          if ( *j <= *(float *)&v5 )
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
