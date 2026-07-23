/*
 * XREFs of sub_1406566E0 @ 0x1406566E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406566E0(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx

  v3 = (unsigned __int8)a2;
  if ( a1 )
  {
    v5 = *a1;
    if ( v5 )
    {
      if ( a3 )
      {
        while ( (sub_14042A5E0(*a1 + 68, a2) & 0xFF0000) != 0 )
          ;
        goto LABEL_7;
      }
      if ( (sub_14042A5E0(v5 + 68, a2) & 0xFF0000) == 0 )
      {
LABEL_7:
        sub_14042A5E0(*a1 + 0x40000, v3);
        return 0LL;
      }
    }
  }
  return 3LL;
}
