/*
 * XREFs of RtlpMuiRegGetLangInfoIndex @ 0x180113320
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180113440 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetLangInfoIndex(__int64 a1, char *a2)
{
  __int16 v3; // bx
  char *v4; // r9
  __int64 v5; // rdx
  unsigned int i; // r10d

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *((_WORD *)a2 + 2);
      if ( v3 || *((__int16 *)a2 + 3) >= 0 )
      {
        v4 = *(char **)(a1 + 16);
        v5 = (a2 - v4) / 28;
        if ( v5 >= 0 && v5 < *(unsigned __int16 *)(a1 + 6) )
          return (unsigned __int16)v5;
        v5 = 0LL;
        if ( *(_WORD *)(a1 + 6) )
        {
          while ( *(_WORD *)v4 != *(_WORD *)a2
               || *((_WORD *)v4 + 2) != v3
               || *((_WORD *)v4 + 3) != *((_WORD *)a2 + 3)
               || *((_WORD *)v4 + 5) != *((_WORD *)a2 + 5)
               || ((*((_WORD *)v4 + 4) ^ *((_WORD *)a2 + 4)) & 0xC000) != 0 )
          {
LABEL_19:
            ++v5;
            v4 += 28;
            if ( v5 >= *(unsigned __int16 *)(a1 + 6) )
              return 0xFFFFFFFFLL;
          }
          for ( i = 0; i < 4; ++i )
          {
            if ( (((unsigned __int16)(*((_WORD *)v4 + 4) ^ *((_WORD *)a2 + 4)) >> (2 * i)) & 3) != 0
              || *(_WORD *)&v4[2 * i + 12] != *(_WORD *)&a2[2 * i + 12] )
            {
              goto LABEL_19;
            }
          }
          return (unsigned __int16)v5;
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
