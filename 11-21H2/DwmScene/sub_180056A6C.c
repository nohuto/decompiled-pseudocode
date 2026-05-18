/*
 * XREFs of sub_180056A6C @ 0x180056A6C
 * Callers:
 *     sub_1800560A0 @ 0x1800560A0 (sub_1800560A0.c)
 *     sub_18007D97C @ 0x18007D97C (sub_18007D97C.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 * Callees:
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 */

__int64 __fastcall sub_180056A6C(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // rbx

  v2 = *(__int64 **)(a1 + 2088);
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
    v5 = *(__int64 **)(a1 + 2088);
  }
  if ( *((_BYTE *)v2 + 25) || (unsigned __int8)sub_18001DE04(a2, v2 + 4) || v2 == v5 )
    return 511LL;
  else
    return *((unsigned __int16 *)v2 + 32);
}
