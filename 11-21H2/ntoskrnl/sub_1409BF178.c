/*
 * XREFs of sub_1409BF178 @ 0x1409BF178
 * Callers:
 *     sub_1409BF744 @ 0x1409BF744 (sub_1409BF744.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409BF178(_DWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r9
  _DWORD *v4; // r8
  unsigned int *i; // rcx
  unsigned int v6; // eax
  int v7; // r8d

  v2 = 0LL;
  v3 = 1LL;
  if ( a2 <= 1 )
  {
    if ( !a2 )
      return 1;
LABEL_8:
    for ( i = a1 + 1; ; i += 8 )
    {
      v6 = i[6];
      if ( (v6 & 4) != 0 && v6 != 4 )
        break;
      if ( *i > 0xF )
        break;
      v7 = 33281;
      if ( _bittest(&v7, *i) || i[1] > 2 || i[2] > 1 || *((_BYTE *)i + 12) >= 0x40u || i[4] >= 4 )
        break;
      if ( ++v2 >= a2 )
        return 1;
    }
  }
  else
  {
    v4 = a1;
    while ( v4[8] != *v4 || v4[9] != v4[1] )
    {
      ++v3;
      v4 += 8;
      if ( v3 >= a2 )
        goto LABEL_8;
    }
  }
  return 0;
}
