/*
 * XREFs of sub_14098C45C @ 0x14098C45C
 * Callers:
 *     sub_140845880 @ 0x140845880 (sub_140845880.c)
 *     sub_14098BC1C @ 0x14098BC1C (sub_14098BC1C.c)
 * Callees:
 *     sub_1405DD8E4 @ 0x1405DD8E4 (sub_1405DD8E4.c)
 *     sub_14081CE58 @ 0x14081CE58 (sub_14081CE58.c)
 *     sub_14098BB94 @ 0x14098BB94 (sub_14098BB94.c)
 *     sub_14098BDD4 @ 0x14098BDD4 (sub_14098BDD4.c)
 *     sub_14098C27C @ 0x14098C27C (sub_14098C27C.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 */

__int64 __fastcall sub_14098C45C(signed __int32 *a1)
{
  __int64 v2; // rbp
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int16 v5; // si
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v2 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v3 = *a1;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(a1, v3, v3);
  }
  while ( v4 != v3 );
  v5 = v3;
  if ( a1[32] || (v3 & 0x3000) == 0 || (v3 & 0x10) != 0 )
  {
    v6 = -1073741823;
  }
  else if ( (v3 & 0x808) == 0x800 )
  {
    v6 = -1073741536;
  }
  else
  {
    _m_prefetchw(a1);
    if ( (_InterlockedOr(a1, 0x40u) & 0x40) == 0 )
      sub_14081CE58(7);
    a1[21] = 0;
    a1[15] = 1;
    a1[16] = 5;
    a1[17] = 5;
    a1[20] = a1[14];
    a1[18] = 1;
    a1[19] = 2;
    v7 = sub_14098BDD4(a1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      _InterlockedOr(a1, 0x80u);
      if ( (v5 & 0x800) != 0 )
      {
        *((_BYTE *)a1 + 86) = 3;
        sub_140A4A768(a1 + 15);
      }
      *((_BYTE *)a1 + 564) = 0;
      *((_BYTE *)a1 + 86) = 2;
      v8 = sub_140A4A768(a1 + 15);
      a1[30] = v8;
      v6 = v8;
      if ( v8 >= 0 )
      {
        _InterlockedOr(a1, 0x10u);
        _InterlockedAnd(a1, 0xFFFFFFDF);
        ++a1[31];
        v6 = 0;
        goto LABEL_21;
      }
    }
    else
    {
      a1[30] = v7;
    }
  }
  _m_prefetchw(a1);
  v9 = *a1;
  do
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange(a1, v9, v9);
  }
  while ( v10 != v9 );
  if ( (v9 & 0x80u) != 0 )
  {
    sub_14098BB94();
    _InterlockedAnd(a1, 0xFFFFFF7F);
  }
  sub_14098C27C(a1);
LABEL_21:
  sub_1405DD8E4(1u, v6, (MEMORY[0xFFFFF78000000008] - v2) / 0x989680uLL);
  return v6;
}
