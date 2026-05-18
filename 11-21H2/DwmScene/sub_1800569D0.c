/*
 * XREFs of sub_1800569D0 @ 0x1800569D0
 * Callers:
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_180055F60 @ 0x180055F60 (sub_180055F60.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180069018 @ 0x180069018 (sub_180069018.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 * Callees:
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 */

__int64 __fastcall sub_1800569D0(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // rbx

  v2 = *(__int64 **)(a1 + 16);
  v5 = v2;
  v6 = (__int64 *)v2[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( (unsigned __int8)sub_18001DE04(v6 + 4, a2) )
      {
        v6 = (__int64 *)v6[2];
      }
      else
      {
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = *(__int64 **)(a1 + 16);
  }
  if ( *((_BYTE *)v2 + 25) || (unsigned __int8)sub_18001DE04(a2, v2 + 4) || v2 == v5 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)v2 + 16);
}
