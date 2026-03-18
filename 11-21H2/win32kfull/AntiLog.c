/*
 * XREFs of AntiLog @ 0x1C0095678
 * Callers:
 *     RaisePower @ 0x1C0095584 (RaisePower.c)
 * Callees:
 *     FD6DivL @ 0x1C009588C (FD6DivL.c)
 *     MantissaToFraction @ 0x1C00958C0 (MantissaToFraction.c)
 */

__int64 __fastcall AntiLog(int a1)
{
  int v1; // r8d
  unsigned int v2; // r9d
  int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // edx
  unsigned int i; // edi
  int v8; // r9d

  v1 = a1;
  v2 = 1000000;
  if ( a1 >= 0 )
  {
    if ( a1 >= 1000000 )
    {
      if ( a1 >= 3331930 )
        return 0x7FFFFFFFLL;
      v3 = (a1 + 999999) / 1000000;
      v1 = 1000000 * v3 - a1;
    }
    else
    {
      v3 = 0;
    }
  }
  else
  {
    if ( a1 <= -6000000 )
      return 1LL;
    v3 = (a1 - 999999) / 1000000;
    v1 = -1000000 * v3 + a1;
  }
  if ( !v1 )
    goto LABEL_16;
  v4 = v1 / 10000;
  if ( v1 / 10000 < 0 || v4 > 0x63 )
    return 0x7FFFFFFFLL;
  _mm_lfence();
  v5 = (unsigned __int16)MantSearchTable[v4];
  v6 = (unsigned __int16)word_1C02EA362[v4] + 1;
  for ( i = (v5 + v6) >> 1; ; i = (int)(v5 + v6) >> 1 )
  {
    if ( i == v5 )
    {
      v8 = MantissaToFraction((unsigned int)(v1 - MantissaTable[v5]), (unsigned int)MantissaCorrectData[v5]);
      goto LABEL_15;
    }
    if ( v1 >= MantissaTable[i] )
      break;
    v6 = i;
LABEL_12:
    ;
  }
  if ( v1 > MantissaTable[i] )
  {
    v5 = i;
    goto LABEL_12;
  }
  v8 = 0;
LABEL_15:
  v2 = 1000000 * (i + 100) + v8;
  v3 -= 2;
LABEL_16:
  if ( v3 < 0 )
    return FD6DivL(v2, (unsigned int)Power10ExpNum[-v3]);
  if ( v3 > 0 )
    return v2 * Power10ExpNum[v3];
  return v2;
}
