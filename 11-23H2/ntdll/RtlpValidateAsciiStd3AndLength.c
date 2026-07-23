/*
 * XREFs of RtlpValidateAsciiStd3AndLength @ 0x18000D8A8
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D648 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     ValidateStd3Range @ 0x1800B0CAA (ValidateStd3Range.c)
 *     FindEmailAt @ 0x18010D08C (FindEmailAt.c)
 */

bool __fastcall RtlpValidateAsciiStd3AndLength(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // rbx
  char v5; // bp
  char v6; // si
  unsigned int v8; // r10d
  unsigned __int16 *v9; // r11
  unsigned __int16 *v10; // r9
  unsigned __int16 *i; // r8

  v4 = a1 - 1;
  v5 = a4;
  v6 = a3;
  LOWORD(v8) = 46;
  v9 = &a1[(int)a2];
  if ( (_BYTE)a3 )
    v10 = &a1[(int)FindEmailAt(a1, a2, a3, a4)];
  else
    v10 = a1 - 1;
  if ( v10 == v9 || (int)a2 <= 0 )
    return 0;
  for ( i = a1; i != v9; ++i )
  {
    v8 = *i;
    if ( v8 >= 0x7F )
      return 0;
    if ( v8 == (v6 != 0 ? 64 : 46) )
    {
      if ( v6 )
      {
        if ( i == a1 )
          return 0;
        if ( i == v10 - 1 )
          v6 = 0;
      }
      else if ( i == v4 + 1
             || (__int64)(((char *)i - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) > 128
             || v5 && i > a1 && *(i - 1) == 45 )
      {
        return 0;
      }
      v4 = i;
    }
    else if ( v6 )
    {
      if ( !(_WORD)v8 )
        return 0;
    }
    else if ( v5 && (v8 == 45 && i == v4 + 1 || !(unsigned __int8)ValidateStd3Range((unsigned __int16)v8)) || v8 < 0x20 )
    {
      return 0;
    }
  }
  if ( v6 )
    return 1;
  if ( (__int64)(((char *)v9 - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) > 128 || v9 - v10 > 256LL - ((_WORD)v8 != 46) )
    return 0;
  if ( !v5 )
    return 1;
  return (_WORD)v8 != 45;
}
