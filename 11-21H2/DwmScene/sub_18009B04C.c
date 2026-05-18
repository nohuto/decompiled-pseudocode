/*
 * XREFs of sub_18009B04C @ 0x18009B04C
 * Callers:
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18009B04C(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  char v3; // cl
  __int64 *v4; // r9
  __int64 *v5; // rax

  v2 = *(__int64 **)(a1 + 144);
  v3 = 0;
  v4 = v2;
  v5 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 8) >= a2 )
    {
      v2 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( !*((_BYTE *)v2 + 25) && a2 >= *((_DWORD *)v2 + 8) && v2 != v4 )
    return 1;
  return v3;
}
