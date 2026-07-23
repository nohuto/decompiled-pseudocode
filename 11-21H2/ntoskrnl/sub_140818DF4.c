/*
 * XREFs of sub_140818DF4 @ 0x140818DF4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_14098FB30 @ 0x14098FB30 (sub_14098FB30.c)
 * Callees:
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 */

__int64 __fastcall sub_140818DF4(char a1, _DWORD *a2, bool *a3)
{
  bool v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r10
  bool v7; // zf

  if ( dword_140D050E8 == -1 )
    v4 = (unsigned int)(dword_140D05234 - 1) > 0xFFFFFFFD;
  else
    v4 = dword_140D050E8 == 0;
  v5 = v4;
  if ( !dword_140D050EC )
    v5 = 1LL;
  if ( a1 )
  {
    v5 = (unsigned __int8)v5;
    if ( byte_140D06A4B )
      v5 = 1LL;
  }
  if ( (_BYTE)a2 )
  {
    a2 = &unk_140D06E18;
    v6 = 2LL;
    do
    {
      v7 = *a2++ == 0;
      v5 = (unsigned __int8)v5;
      if ( !v7 )
        v5 = 1LL;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 )
    *a3 = (_BYTE)v5 == 0;
  LOBYTE(v5) = (_BYTE)v5 == 0;
  return sub_140818E88(v5, a2, a3, 0LL);
}
