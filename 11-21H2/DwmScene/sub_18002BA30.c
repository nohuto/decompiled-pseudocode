/*
 * XREFs of sub_18002BA30 @ 0x18002BA30
 * Callers:
 *     sub_18002A050 @ 0x18002A050 (sub_18002A050.c)
 *     sub_18004EE74 @ 0x18004EE74 (sub_18004EE74.c)
 *     sub_180096B60 @ 0x180096B60 (sub_180096B60.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18002BA30(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r10
  char result; // al
  __int64 *v5; // r8
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rdx

  v2 = *(__int64 **)(a1 + 80);
  result = 0;
  v5 = v2;
  v6 = (__int64 *)v2[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    v7 = (__int64 *)v2[1];
    do
    {
      if ( *((_DWORD *)v7 + 7) >= a2 )
      {
        v5 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) && a2 >= *((_DWORD *)v5 + 7) && v5 != v2 )
  {
    v8 = v2;
    while ( !*((_BYTE *)v6 + 25) )
    {
      if ( *((_DWORD *)v6 + 7) >= a2 )
      {
        v8 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    if ( *((_BYTE *)v8 + 25) || a2 < *((_DWORD *)v8 + 7) )
      v8 = v2;
    if ( *((_BYTE *)v8 + 32) )
      return 1;
  }
  return result;
}
