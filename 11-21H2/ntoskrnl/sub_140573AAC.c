/*
 * XREFs of sub_140573AAC @ 0x140573AAC
 * Callers:
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140573AAC(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int16 *a4)
{
  unsigned __int16 v6; // cx
  bool v7; // cc
  unsigned int v8; // ecx
  __int16 v9; // ax

  *a4 = 0;
  if ( a2 == a3 )
  {
    *(_QWORD *)(a1 + 1092) = 0LL;
    return 0;
  }
  v6 = *((_WORD *)&dword_140D05350 + a3 + 38);
  v7 = v6 <= *((_WORD *)&dword_140D05350 + a2 + 38);
  if ( v6 >= *((_WORD *)&dword_140D05350 + a2 + 38) )
  {
    *(_DWORD *)(a1 + 1092) = 0;
    if ( v7 )
    {
      v9 = 2;
    }
    else
    {
      if ( ++*(_DWORD *)(a1 + 1096) < (unsigned int)dword_140D05380 )
        return 0;
      v9 = 4;
    }
    *(_DWORD *)(a1 + 1096) = 0;
  }
  else
  {
    v8 = ++*(_DWORD *)(a1 + 1092);
    *(_DWORD *)(a1 + 1096) = 0;
    if ( v8 < dword_140D0537C )
      return 0;
    *(_DWORD *)(a1 + 1092) = 0;
    v9 = 8;
  }
  *a4 = v9;
  return 1;
}
