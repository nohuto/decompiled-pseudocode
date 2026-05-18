/*
 * XREFs of sub_180057988 @ 0x180057988
 * Callers:
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 */

bool __fastcall sub_180057988(__int64 a1, char **a2)
{
  __int64 *v2; // rsi
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  bool v7; // bl
  unsigned __int64 v8; // rdx
  bool result; // al

  v2 = *(__int64 **)(a1 + 18592);
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
    v5 = *(__int64 **)(a1 + 18592);
  }
  v7 = !*((_BYTE *)v2 + 25) && !(unsigned __int8)sub_18001DE04(a2, v2 + 4) && v2 != v5;
  v8 = (unsigned __int64)a2[3];
  if ( v8 >= 0x10 )
    sub_180010884(*a2, v8 + 1);
  a2[2] = 0LL;
  result = v7;
  a2[3] = (char *)15;
  *(_BYTE *)a2 = 0;
  return result;
}
