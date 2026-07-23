/*
 * XREFs of sub_140655EE0 @ 0x140655EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140655EE0(__int64 a1, __int64 a2, char a3)
{
  char v5; // al
  __int64 v6; // rdx
  char v8; // al
  __int64 v9; // rdx
  __int16 v10; // r8
  char v11; // al

  if ( !a1 || !*(_QWORD *)a1 )
    return 3LL;
  if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(a2) = 6;
    for ( LOBYTE(a2) = sub_14042A5E0(a1, a2); (a2 & 0xB0) != 0xB0; LOBYTE(a2) = sub_14042A5E0(a1, a2) )
    {
      if ( (a2 & 0x80u) == 0LL )
      {
        LOBYTE(a2) = 5;
        sub_14042A5E0(a1, a2);
        if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
          sub_14042A5E0(a1, 0LL);
      }
      LOBYTE(a2) = 6;
    }
  }
  LOBYTE(a2) = 5;
  v5 = sub_14042A5E0(a1, a2);
  if ( v5 == -1 )
    return 3LL;
  while ( (v5 & 0x20) == 0 )
  {
    LOBYTE(v6) = 6;
    v8 = sub_14042A5E0(a1, v6);
    v10 = *(_WORD *)(a1 + 12);
    v11 = v8 & 0x40;
    if ( v11 == 0 && (v10 & 2) != 0 || v11 != 0 && (v10 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v10 | 4;
    if ( !a3 )
      return 3LL;
    LOBYTE(v9) = 5;
    v5 = sub_14042A5E0(a1, v9);
  }
  sub_14042A5E0(a1, 0LL);
  return 0LL;
}
