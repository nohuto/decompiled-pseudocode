/*
 * XREFs of _soutput_s @ 0x1800A04E4
 * Callers:
 *     _vsnprintf_s @ 0x18009E5C0 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x18009F0B0 (vsprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     _output_s @ 0x18009FB74 (_output_s.c)
 *     _flsbuf_s @ 0x1800A2D24 (_flsbuf_s.c)
 */

__int64 __fastcall soutput_s(_BYTE *a1, unsigned __int64 a2, char *a3, int *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  _BYTE *v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+3Ch] [rbp-24h]
  _BYTE *v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+5Ch] [rbp-4h]

  v11 = 0;
  v15 = 0;
  v14 = 0LL;
  if ( a2 )
  {
    if ( a2 == -1LL )
    {
      v10 = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x7FFFFFFF )
    {
      v10 = a2;
LABEL_6:
      v12 = a1;
      v9 = a1;
      v13 = 66;
      v6 = output_s((__int64)&v9, a3, a4);
      a1[a2 - 1] = 0;
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( v10 >= 0 )
        {
          if ( a1 )
            *a1 = 0;
          return v7;
        }
        return 4294967294LL;
      }
      if ( --v10 < 0 )
      {
        if ( (unsigned int)flsbuf_s(0LL, &v9) == -1 )
          return 4294967294LL;
      }
      else
      {
        *v9 = 0;
      }
      return v7;
    }
  }
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
